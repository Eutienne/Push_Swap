/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   handle_3_args.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/31 13:50:28 by eutrodri      #+#    #+#                 */
/*   Updated: 2020/02/07 13:18:29 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

void	handle_3_args_b(t_stack **s)
{
	if ((*s)->prev->i < (*s)->i)
	{
		if ((*s)->prev->i < (*s)->prev->prev->i)
		{
			if ((*s)->i > (*s)->prev->prev->i)
			{
				sb(s);
				rotate_b(s);
			}
			else
				reverse_rotate_b(s);
		}
		else
			return ;
	}
	else if ((*s)->i < (*s)->prev->prev->i)
		rotate_b(s);
	if ((*s)->prev->i > (*s)->i)
		sb(s);
}

void	handle_3_args(t_stack **s)
{
	if ((*s)->prev->i > (*s)->i)
	{
		if ((*s)->prev->i > (*s)->prev->prev->i)
			reverse_rotate_a(s);
		else
			return ;
	}
	else if ((*s)->i > (*s)->prev->prev->i)
		rotate_a(s);
	if ((*s)->prev->i < (*s)->i)
		sa(s);
}
