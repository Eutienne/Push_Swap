/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_stack.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/31 12:00:53 by eutrodri      #+#    #+#                 */
/*   Updated: 2020/02/04 16:46:23 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

static void	print_stack_a(t_stack **a)
{
	ft_printf("---------------\n");
	if (*a)
	{
		back_to_first_note(a);
		ft_printf("Stack A is:\n");
		while ((*a)->prev)
		{
			ft_printf("num is %i pos is %i\n", (*a)->i, (*a)->pos);
			*a = (*a)->prev;
		}
		ft_printf("num is %i pos is %i\n", (*a)->i, (*a)->pos);
	}
	else
		ft_printf("Stack A is empty\n");
	ft_printf("---------------\n");
}

static void	print_stack_b(t_stack **b)
{
	ft_printf("---------------\n");
	if (*b)
	{
		back_to_first_note(b);
		ft_printf("Stack B is:\n");
		while ((*b)->prev)
		{
			ft_printf("num is %i pos is %i\n", (*b)->i, (*b)->pos);
			*b = (*b)->prev;
		}
		ft_printf("num is %i pos is %i\n", (*b)->i, (*b)->pos);
	}
	else
		ft_printf("Stack B is empty\n");
	ft_printf("---------------\n");
}

void		print_stack(t_stack **a, t_stack **b)
{
	print_stack_a(a);
	print_stack_b(b);
	back_to_first_note(a);
	back_to_first_note(b);
}
