/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_swap_options.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/17 16:54:06 by eutrodri      #+#    #+#                 */
/*   Updated: 2020/02/21 03:13:34 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

void	check_options(char **argv, t_options *o)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (argv[i][0] == '-')
		{
			if (argv[i][1] == 's')
				o->s = 1;
			if (argv[i][1] == 'h')
			{
				ft_printf("push_swap\nusage: push_swap [-hs] [nbr]...\n\
						\n h : print this help message \n s : print stack\n\
						\n push_swap will sort a list of nbr from low to high \
						\n by using two stacks\n");
				exit(0);
			}
		}
		i++;
	}
}

void	print_swap_options(t_stack **a, t_stack **b, t_options *o)
{
	if (o->s > 0)
		print_stack(a, b);
}
