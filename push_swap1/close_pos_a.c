/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   close_pos_a.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/06 12:37:42 by eutrodri      #+#    #+#                 */
/*   Updated: 2020/02/06 13:42:37 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

void	search_pos_a(t_stack **s, int p)
{
	t_stack *h;
	t_stack *t;

	h = head(s);
	t = tail(s);
	while (h->pos != p && t->pos != p && h->pos != p + 1 && t->pos != p + 1)
	{
		t = t->next;
		h = h->prev;
	}
	if (h->pos == p || h->prev->pos == p || h->pos == p + 1 ||\
			h->prev->pos == p + 1)
	{
		while ((*s)->pos != p && (*s)->pos != p + 1)
			rotate_a(s);
	}
	else
	{
		while ((*s)->pos != p && (*s)->pos != p + 1)
			reverse_rotate_a(s);
	}
}

void	search_pos_a2(t_stack **s, int p)
{
	t_stack *h;
	t_stack *t;

	h = head(s);
	t = tail(s);
	while (h->pos != p && t->pos != p)
	{
		t = t->next;
		h = h->prev;
	}
	if (h->pos == p || h->prev->pos == p)
	{
		while ((*s)->pos != p)
			rotate_a(s);
	}
	else
	{
		while ((*s)->pos != p)
			reverse_rotate_a(s);
	}
}

void	close_pos_a(t_stack **s, int p)
{
	t_stack *h;
	t_stack *t;

	h = head(s);
	t = tail(s);
	while (h->pos >= p && t->pos >= p)
	{
		t = t->next;
		h = h->prev;
	}
	if (h->pos < p || h->prev->pos < p)
	{
		while ((*s)->pos >= p)
			rotate_a(s);
	}
	else
	{
		while ((*s)->pos >= p)
			reverse_rotate_a(s);
	}
}
