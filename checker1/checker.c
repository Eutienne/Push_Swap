/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   checker.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/18 14:24:09 by eutrodri      #+#    #+#                 */
/*   Updated: 2020/02/22 14:17:06 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		main(int argc, char **argv)
{
	t_stack		*a;
	t_stack		*b;

	if (argc < 2)
		return (0);
	else if (argc == 2)
		argc = one_arg(argv, &a, &b);
	else
	{
		valid(argv);
		first_elem(&a, &b, argv[argc - 1]);
		arg_in_stack(argc, argv, &a);
	}
	read_instruct(&a, &b);
	back_to_first_note(&a);
	it_is_sort(&a, &b, argc - 1);
	free_stack(&a);
	free_stack(&b);
	return (0);
}
