/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   back_to_first_note.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/26 21:13:42 by eutrodri      #+#    #+#                 */
/*   Updated: 2020/02/10 12:52:22 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

void	back_to_first_note(t_stack **s)
{
	while (*s && (*s)->next)
		*s = (*s)->next;
}

void	back_to_last_note(t_stack **s)
{
	while (*s && (*s)->prev)
		*s = (*s)->prev;
}
