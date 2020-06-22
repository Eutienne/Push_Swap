/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   check_if_sort.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/27 14:19:45 by eutrodri      #+#    #+#                 */
/*   Updated: 2020/02/20 23:39:27 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	it_is_sort(t_stack **a, t_stack **b, int elem)
{
	int	i;

	i = 0;
	if (*a && (*a)->prev == NULL && (*a)->next == NULL && *b == NULL)
	{
		ft_printf("OK\n");
		return (0);
	}
	while (*a && (*a)->prev && (*a)->i < (*a)->prev->i)
	{
		*a = (*a)->prev;
		i++;
	}
	if (*a && (*a)->next && (*a)->i > (*a)->next->i)
		i++;
	if (i == elem && *b == NULL)
		ft_printf("OK\n");
	else if (elem != i || *b != NULL)
		ft_printf("KO\n");
	back_to_first_note(a);
	return (0);
}
