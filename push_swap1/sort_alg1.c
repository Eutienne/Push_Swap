/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_alg1.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/27 15:37:51 by eutrodri      #+#    #+#                 */
/*   Updated: 2020/02/10 14:30:43 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

void		quicksort(t_stack **a, t_stack **b, int elem)
{
	int	p;
	int	i;

	back_to_first_note(a);
	p = elem / 2;
	i = p;
	push_2_b(a, b, p, i);
	sort_b(a, b, p);
	while (p > 5)
		p = p / 2;
	if (elem > 6)
		sort_half_b(a, b, elem / 2, p);
	from_a_to_b(a, b, elem, elem / 2);
	handle_3_args(a);
	if (*b)
		empty_b(a, b);
}
