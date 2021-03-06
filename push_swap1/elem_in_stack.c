/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   elem_in_stack.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/03 12:47:07 by eutrodri      #+#    #+#                 */
/*   Updated: 2020/02/03 12:52:00 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

int	elem_in_stack(t_stack **s)
{
	int	tmp;

	tmp = 0;
	back_to_first_note(s);
	while ((*s)->prev)
	{
		tmp++;
		*s = (*s)->prev;
	}
	back_to_first_note(s);
	return (tmp);
}
