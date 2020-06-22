/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   free_stack.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 12:10:20 by eutrodri      #+#    #+#                 */
/*   Updated: 2020/02/12 12:12:52 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

void	free_stack(t_stack **a)
{
	t_stack *tmp;

	while (*a)
	{
		tmp = *a;
		*a = (*a)->prev;
		free(tmp);
	}
}
