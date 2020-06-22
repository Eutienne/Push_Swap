/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ss.c                                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/23 13:46:43 by eutrodri      #+#    #+#                 */
/*   Updated: 2020/02/18 14:03:00 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ss(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (*b)
	{
		tmp = *b;
		*b = (*b)->prev;
		tmp->prev = (*b)->prev;
		(*b)->next = NULL;
		(*b)->prev = tmp;
		tmp->next = *b;
		if (tmp->prev)
			tmp->prev->next = tmp;
	}
	if (*a)
	{
		tmp = *a;
		*a = (*a)->prev;
		tmp->prev = (*a)->prev;
		(*a)->next = NULL;
		(*a)->prev = tmp;
		tmp->next = *a;
		if (tmp->prev)
			tmp->prev->next = tmp;
	}
}

void	sb(t_stack **b)
{
	t_stack	*tmp;

	tmp = *b;
	*b = (*b)->prev;
	tmp->prev = (*b)->prev;
	(*b)->next = NULL;
	(*b)->prev = tmp;
	tmp->next = *b;
	if (tmp->prev)
		tmp->prev->next = tmp;
}

void	sa(t_stack **a)
{
	t_stack	*tmp;

	tmp = *a;
	*a = (*a)->prev;
	tmp->prev = (*a)->prev;
	(*a)->next = NULL;
	(*a)->prev = tmp;
	tmp->next = *a;
	if (tmp->prev)
		tmp->prev->next = tmp;
}
