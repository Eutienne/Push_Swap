/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   check_if_sort.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/27 14:19:45 by eutrodri      #+#    #+#                 */
/*   Updated: 2020/02/17 17:52:58 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

int	is_it_sort(t_stack **a, int p)
{
	while ((*a)->pos != 0)
		*a = (*a)->prev;
	while (*a)
	{
		if ((*a)->pos == p)
		{
			if ((*a)->prev)
				*a = (*a)->prev;
			else
				back_to_first_note(a);
			p++;
		}
		else if ((*a)->pos == 0)
		{
			back_to_first_note(a);
			return (1);
		}
		else
		{
			back_to_first_note(a);
			return (0);
		}
	}
	return (0);
}

int	it_is_sort(t_stack **a, int elem)
{
	int	i;

	i = 0;
	while (i == (*a)->pos && i < elem)
	{
		if ((*a)->prev)
			*a = (*a)->prev;
		i++;
	}
	back_to_first_note(a);
	if (i == elem)
		return (1);
	return (0);
}
