/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ss.c                                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/23 13:46:43 by eutrodri      #+#    #+#                 */
/*   Updated: 2020/01/27 12:11:25 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

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
	ft_printf("ss\n");
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
	ft_printf("sb\n");
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
	ft_printf("sa\n");
}
