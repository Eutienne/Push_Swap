/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   hop.c                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/03 12:56:03 by eutrodri      #+#    #+#                 */
/*   Updated: 2020/02/03 15:46:24 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

int	hop(t_stack *head, t_stack *tail, int i)
{
	int	h;
	int	t;

	t = 0;
	h = 0;
	while (head->prev && head->pos != i)
	{
		h++;
		head = head->prev;
	}
	while (tail->next && tail->pos != i)
	{
		t++;
		tail = tail->next;
	}
	if (t > h)
		return (1);
	return (0);
}
