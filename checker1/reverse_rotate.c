/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   reverse_rotate.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/25 14:48:38 by eutrodri      #+#    #+#                 */
/*   Updated: 2020/02/18 14:45:33 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	reverse_rotate(t_stack **s)
{
	t_stack	*tmp;

	if (*s && (*s)->prev)
	{
		tmp = *s;
		while ((*s)->prev)
			*s = (*s)->prev;
		(*s)->prev = tmp;
		(*s)->next->prev = NULL;
		(*s)->next = NULL;
		tmp->next = *s;
	}
}

void	reverse_reverse(t_stack **a, t_stack **b)
{
	if (*a)
		reverse_rotate(a);
	if (*b)
		reverse_rotate(b);
}
