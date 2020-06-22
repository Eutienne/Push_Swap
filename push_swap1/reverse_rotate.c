/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   reverse_rotate.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/25 14:48:38 by eutrodri      #+#    #+#                 */
/*   Updated: 2020/01/25 19:46:42 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

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

void	reverse_rotate_a(t_stack **s)
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
		ft_printf("rra\n");
	}
}

void	reverse_rotate_b(t_stack **s)
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
		ft_printf("rrb\n");
	}
}

void	reverse_reverse(t_stack **a, t_stack **b)
{
	if (*a)
		reverse_rotate_a(a);
	if (*b)
		reverse_rotate_b(b);
	ft_printf("rrr\n");
}
