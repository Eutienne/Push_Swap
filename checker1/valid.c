/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   valid.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/31 13:11:28 by eutrodri      #+#    #+#                 */
/*   Updated: 2020/02/21 03:02:04 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static double	ft_atoidouble(const char *str)
{
	double	res;
	double	sign;
	int		i;

	res = 0;
	sign = 1;
	i = 0;
	while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v') || \
			(str[i] == ' ') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == '-')
	{
		if (ft_strcmp(&str[i], "-2147483648") == 0)
			return (-2147483648);
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (sign * res);
}

static int		ft_isnum(char *c)
{
	int	i;

	i = 0;
	if (ft_strcmp(c, "-s") == 0 || ft_strcmp(c, "-h") == 0)
		return (0);
	while (c[i])
	{
		if (c[i] == '-' || c[i] == '+')
			i++;
		else if (c[i] >= 48 && c[i] <= 57)
			i++;
		else
		{
			ft_printf("Error\n");
			exit(-1);
		}
	}
	return (1);
}

static int		double_nbr(char **argv)
{
	int	i;
	int j;

	i = 0;
	while (argv[i])
	{
		if (ft_strcmp(argv[i], "./checker") == 0)
			i++;
		j = i + 1;
		while (argv[j])
		{
			if (ft_strcmp(argv[i], argv[j]) == 0)
			{
				ft_printf("Error\n");
				exit(-1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int				valid(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (ft_strcmp(argv[i], "./checker") != 0)
			ft_isnum(argv[i]);
		i++;
	}
	i = 0;
	while (argv[i])
	{
		if (ft_strcmp(argv[i], "./checker") == 0)
			i++;
		if (ft_atoidouble(argv[i]) > 2147483647 ||\
				ft_atoidouble(argv[i]) < -2147483648)
		{
			ft_printf("Error\n");
			exit(-1);
		}
		i++;
	}
	double_nbr(argv);
	return (0);
}
