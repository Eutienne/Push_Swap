/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/23 15:30:33 by eutrodri      #+#    #+#                 */
/*   Updated: 2020/01/25 19:47:09 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

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

void	rotate_a(t_stack **s)
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
		ft_printf("ra\n");
	}
}

void	rotate_b(t_stack **s)
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
		ft_printf("rb\n");
	}
}

void	rotate_rotate(t_stack **a, t_stack **b)
{
	if (*a)
		rotate(a);
	if (*b)
		rotate(b);
	ft_printf("rr\n");
}
