/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   read_instruct.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/19 10:49:19 by eutrodri      #+#    #+#                 */
/*   Updated: 2020/02/19 12:55:06 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static int	instruct(char *line, t_stack **a, t_stack **b)
{
	if (ft_strcmp(line, "sa") == 0)
		sa(a);
	else if (ft_strcmp(line, "sb") == 0)
		sb(b);
	else if (ft_strcmp(line, "ss") == 0)
		ss(a, b);
	else if (ft_strcmp(line, "ra") == 0)
		rotate(a);
	else if (ft_strcmp(line, "rb") == 0)
		rotate(b);
	else if (ft_strcmp(line, "rr") == 0)
		rotate_rotate(a, b);
	else if (ft_strcmp(line, "rra") == 0)
		reverse_rotate(a);
	else if (ft_strcmp(line, "rrb") == 0)
		reverse_rotate(b);
	else if (ft_strcmp(line, "rrr") == 0)
		reverse_reverse(a, b);
	else if (ft_strcmp(line, "pa") == 0)
		push(a, b);
	else if (ft_strcmp(line, "pb") == 0)
		push(b, a);
	else
		return (0);
	return (1);
}

void		read_instruct(t_stack **a, t_stack **b)
{
	char	*line;
	int		i;

	line = NULL;
	while (get_next_line(0, &line) == 1)
	{
		i = instruct(line, a, b);
		if (i == 0)
		{
			ft_printf("Error\n");
			exit(-1);
		}
		if (line != NULL)
		{
			free(line);
			line = NULL;
		}
	}
	free(line);
}
