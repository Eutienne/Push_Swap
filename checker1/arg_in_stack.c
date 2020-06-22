/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   arg_in_stack.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/17 16:32:09 by eutrodri      #+#    #+#                 */
/*   Updated: 2020/02/21 03:15:11 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	arg_in_stack(int argc, char **argv, t_stack **a)
{
	while (argc > 1)
	{
		if (ft_strcmp(argv[argc - 2], "-s") == 0 ||\
				ft_strcmp(argv[argc - 2], "-h") == 0)
		{
			argc--;
			if (argc <= 1)
				return ;
		}
		if (ft_strcmp(argv[argc - 2], "./checker") != 0)
			make_elem(a, argv[argc - 2]);
		argc--;
	}
}
