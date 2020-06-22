/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/23 13:46:34 by eutrodri      #+#    #+#                 */
/*   Updated: 2020/01/25 19:42:05 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

void	push_a(t_stack **dst, t_stack **src)
{
	if ((*src))
	{
		if (*dst)
			(*dst)->next = *src;
		else
			*dst = *src;
		if ((*src)->prev)
		{
			*src = (*src)->prev;
			(*src)->next = NULL;
		}
		else
			*src = NULL;
		if ((*dst)->next)
		{
			(*dst)->next->prev = *dst;
			*dst = (*dst)->next;
		}
		else
			(*dst)->prev = NULL;
		ft_printf("pa\n");
	}
}

void	push_b(t_stack **dst, t_stack **src)
{
	if ((*src))
	{
		if (*dst)
			(*dst)->next = *src;
		else
			*dst = *src;
		if ((*src)->prev)
		{
			*src = (*src)->prev;
			(*src)->next = NULL;
		}
		else
			*src = NULL;
		if ((*dst)->next)
		{
			(*dst)->next->prev = *dst;
			*dst = (*dst)->next;
		}
		else
			(*dst)->prev = NULL;
		ft_printf("pb\n");
	}
}
