/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/23 13:46:50 by eutrodri      #+#    #+#                 */
/*   Updated: 2020/02/22 14:16:58 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

void	set_zero_on_top(t_stack **a)
{
	t_stack	*h;
	t_stack	*t;
	int		i;

	h = head(a);
	t = tail(a);
	i = hop(h, t, 0);
	if (i == 1)
	{
		while ((*a)->pos != 0)
			rotate_a(a);
	}
	else
	{
		while ((*a)->pos != 0)
			reverse_rotate_a(a);
	}
}

void	sorting(t_stack **a, t_stack **b, int i)
{
	int	j;

	j = it_is_sort(a, i);
	if (j == 1)
		return ;
	j = is_it_sort(a, 0);
	if (j == 1)
	{
		set_zero_on_top(a);
	}
	else if (i < 6)
		handle_till_6(a, b, i);
	else
		quicksort(a, b, i);
	back_to_first_note(a);
}

int		main(int argc, char **argv)
{
	t_stack		*a;
	t_stack		*b;
	t_options	o;

	if (argc < 2)
		return (0);
	else if (argc == 2)
		argc = one_arg(argv, &a, &b);
	else
	{
		ft_bzero((void*)&o, sizeof(t_options));
		check_options(argv, &o);
		valid(argv);
		first_elem(&a, &b, argv[argc - 1]);
		arg_in_stack(argc, argv, &a);
	}
	position(&a, argc - 1);
	if (ft_strcmp(argv[1], "-s") == 0 ||\
			ft_strcmp(argv[1], "-h") == 0)
		argc--;
	sorting(&a, &b, argc - 1);
	print_swap_options(&a, &b, &o);
	free_stack(&a);
	return (0);
}
