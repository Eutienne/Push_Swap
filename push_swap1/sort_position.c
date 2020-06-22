/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_position.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/26 20:25:17 by eutrodri      #+#    #+#                 */
/*   Updated: 2020/02/20 02:31:09 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

static void	make_pos(t_stack **a, int i, int p)
{
	while (*a && (*a)->prev)
	{
		if ((*a)->pos == -1)
		{
			if ((*a)->i < i)
				i = (*a)->i;
		}
		*a = (*a)->prev;
	}
	if ((*a)->i < i && (*a)->pos == -1)
		i = (*a)->i;
	while (!((*a)->i == i))
		*a = (*a)->next;
	if ((*a)->i == i && (*a)->pos == -1)
		(*a)->pos = p;
}

static int	with_out_pos(t_stack **a)
{
	while (*a && (*a)->pos != -1 && (*a)->prev)
		*a = (*a)->prev;
	return ((*a)->i);
}

void		position(t_stack **a, int elem)
{
	int	i;
	int	p;

	p = 0;
	while (elem > 0)
	{
		back_to_first_note(a);
		i = with_out_pos(a);
		make_pos(a, i, p);
		p++;
		elem--;
	}
	back_to_first_note(a);
}
