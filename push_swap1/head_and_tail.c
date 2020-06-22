/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   head_and_tail.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/03 12:22:31 by eutrodri      #+#    #+#                 */
/*   Updated: 2020/02/05 13:49:00 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

t_stack	*head(t_stack **s)
{
	t_stack	*tmp;

	tmp = *s;
	back_to_first_note(&tmp);
	return (tmp);
}

t_stack	*tail(t_stack **s)
{
	t_stack	*tmp;

	tmp = *s;
	back_to_last_note(&tmp);
	return (tmp);
}
