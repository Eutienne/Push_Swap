/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_b_stack.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/04 11:11:01 by eutrodri      #+#    #+#                 */
/*   Updated: 2020/02/17 16:04:01 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

void	from_a_to_b(t_stack **a, t_stack **b, int elem, int p)
{
	int	i;
	int	check;

	p = p / 2;
	i = elem - p;
	if (i > elem - 3)
		i = elem - 3;
	check = 1;
	while ((*a)->prev->prev->prev && check == 1)
	{
		if ((*a)->pos < i)
			push_b(b, a);
		if ((*b)->pos < (*b)->prev->pos)
			sb(b);
		check = in_or_out_loop(a, i);
		if (check == 1)
			close_pos_a(a, i);
	}
	if (i == elem - 3)
		return ;
	else
		from_a_to_b(a, b, elem, p);
}

void	sort_half_b(t_stack **a, t_stack **b, int elem, int p)
{
	while ((*b)->pos != p && (*b)->prev->pos != p)
	{
		if (elem_in_stack(a) == 3)
			return ;
		if ((*a)->pos == (*b)->pos + 1)
			push_b(b, a);
		else if ((*a)->pos == (*b)->pos + 2)
		{
			push_b(b, a);
			search_pos_a2(a, (*b)->pos - 1);
			push_b(b, a);
			if ((*b)->pos < (*b)->prev->pos)
				sb(b);
		}
		else if ((*b)->pos != p && (*b)->prev->pos != p)
			search_pos_a(a, (*b)->pos + 1);
		else
			break ;
	}
	if (p * 2 < elem)
		sort_half_b(a, b, elem, p * 2);
}

void	sort_b(t_stack **a, t_stack **b, int p)
{
	int	i;

	p = p / 2;
	i = 0;
	while (p > 0)
	{
		i = elem_in_stack(b);
		if (i <= p || i <= 2)
			break ;
		if ((*b)->pos > p && (*b)->pos > 2)
			push_a(a, b);
		else
			close_pos_b(b, p);
	}
	if (i > 2)
		sort_b(a, b, p);
	else
		handle_3_args_b(b);
}

void	push_2_b(t_stack **a, t_stack **b, int p, int i)
{
	while (*a && (*a)->prev && i > 0)
	{
		if ((*a)->pos < p)
		{
			i--;
			push_b(b, a);
		}
		else
			close_pos_a(a, p);
	}
}

void	empty_b(t_stack **a, t_stack **b)
{
	while (*b)
	{
		if ((*a)->pos == (*b)->pos + 1)
			push_a(a, b);
		else if ((*a)->pos == (*b)->pos + 2)
		{
			push_a(a, b);
			search_pos_b2(b, (*a)->pos + 1);
			push_a(a, b);
			if ((*a)->pos > (*a)->prev->pos)
				sa(a);
		}
		else if ((*b)->prev)
			search_pos_b(b, (*a)->pos - 1);
		else
			break ;
	}
}
