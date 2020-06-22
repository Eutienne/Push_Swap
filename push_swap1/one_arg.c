/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   one_arg.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/19 13:16:33 by eutrodri      #+#    #+#                 */
/*   Updated: 2020/02/20 01:43:08 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

int	one_arg(char **argv, t_stack **a, t_stack **b)
{
	int		i;
	int		j;

	i = 1;
	if (!(argv[1]))
	{
		ft_printf("Erro1r\n");
		exit(-1);
	}
	argv = ft_strsplit(argv[1], ' ');
	while (argv[i])
		i++;
	valid(argv);
	first_elem(a, b, argv[i - 1]);
	arg_in_stack(i, argv, a);
	j = 0;
	while (argv[j])
	{
		free(argv[j]);
		j++;
	}
	free(argv);
	return (i + 1);
}
