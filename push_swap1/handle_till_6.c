/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   handle_till_6.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/24 13:59:11 by eutrodri      #+#    #+#                 */
/*   Updated: 2020/02/22 14:03:57 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

void	duo_args(t_stack **s)
{
	if ((*s)->prev && (*s)->i > (*s)->prev->i)
		sa(s);
}

void	handle_till_6(t_stack **a, t_stack **b, int i)
{
	if (i == 2)
		duo_args(a);
	if (i > 3)
	{
		search_pos_a2(a, 0);
		push_b(b, a);
	}
	if (i > 4)
	{
		search_pos_a2(a, 1);
		push_b(b, a);
	}
	if (i > 2)
		handle_3_args(a);
	while (*b)
		push_a(a, b);
}
