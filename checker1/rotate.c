/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/23 15:30:33 by eutrodri      #+#    #+#                 */
/*   Updated: 2020/02/18 14:45:06 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	rotate(t_stack **s)
{
	t_stack	*tmp;

	if (*s && (*s)->prev)
	{
		tmp = *s;
		*s = (*s)->prev;
		(*s)->next = NULL;
		while ((*s)->prev)
			*s = (*s)->prev;
		(*s)->prev = tmp;
		tmp->next = *s;
		tmp->prev = NULL;
		while ((*s)->next)
			*s = (*s)->next;
	}
}

void	rotate_rotate(t_stack **a, t_stack **b)
{
	if (*a)
		rotate(a);
	if (*b)
		rotate(b);
}
