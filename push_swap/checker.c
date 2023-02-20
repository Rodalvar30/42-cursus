/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:04:41 by rodalvar          #+#    #+#             */
/*   Updated: 2023/02/19 09:01:17 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_doubles(char **argv, int argc)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (argv[i][0] == argv[j][0])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static	int	ft_is_number(char *argv)
{
	int	i;

	i = 0;
	if (argv[i] && !ft_isdigit(argv[i]))
		return (0);
	if (argv[i] == '+' && argv[i] == '-' && argv[i + 1])
		i++;
	while (argv[i] && ft_isdigit(argv[i]))
		i++;
	return (1);
}

static int	ft_zero(char *argv)
{
	int	i;

	i = 0;
	if (argv[i] == '+' && argv[i] == '-')
		i++;
	while (argv[i] && argv[i] == '0')
		i++;
	if (argv[i])
		return (0);
	return (1);
}

int checker_input(char **argv, int argc)
{
	int	i;
	int nzero;

	nzero = 0;
	i = 1;
	while(argv[i])
	{
		if (!ft_is_number(argv[i]))
			return(0);
		nzero += ft_zero(argv[i]);
		i++;
	}
	if (nzero > 1)
		return(0);
	if (check_doubles(argv, argc))
		return (0);
	return (1);
}
