/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/23 13:46:34 by eutrodri      #+#    #+#                 */
/*   Updated: 2020/02/18 14:10:39 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	push(t_stack **dst, t_stack **src)
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
	}
}
