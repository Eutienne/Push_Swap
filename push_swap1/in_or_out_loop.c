/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   in_or_out_loop.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/10 12:47:58 by eutrodri      #+#    #+#                 */
/*   Updated: 2020/02/10 13:22:10 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

int	in_or_out_loop(t_stack **s, int p)
{
	while ((*s)->prev && (*s)->pos >= p)
		*s = (*s)->prev;
	if ((*s)->pos < p)
	{
		back_to_first_note(s);
		return (1);
	}
	back_to_first_note(s);
	return (0);
}
