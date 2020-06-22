/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   make_elem.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/31 13:38:51 by eutrodri      #+#    #+#                 */
/*   Updated: 2020/02/22 12:19:05 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

void	make_elem(t_stack **a, char *i)
{
	(*a)->next = (t_stack*)malloc(sizeof(t_stack));
	(*a)->next->prev = *a;
	*a = (*a)->next;
	(*a)->i = ft_atoi(i);
	(*a)->pos = -1;
	(*a)->next = NULL;
}

void	first_elem(t_stack **a, t_stack **b, char *arg)
{
	*a = (t_stack*)malloc(sizeof(t_stack));
	(*a)->i = ft_atoi(arg);
	(*a)->pos = -1;
	(*a)->prev = NULL;
	(*a)->next = NULL;
	*b = NULL;
}
