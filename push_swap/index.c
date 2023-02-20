/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:40:34 by rodalvar          #+#    #+#             */
/*   Updated: 2023/02/19 16:50:35 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_max(t_node a)
{
	int	max;

	max = a->value;
	while (a)
	{
		if (max < a->value)
			max = a->value;
		a = a->next;
	}
	return (max);
}

int	ft_min(t_node a)
{
	int	min;

	min = a->value;
	while (a)
	{
		if (min > a->value)
			min = a->value;
		a = a->next;
	}
	return (min);
}

void	ft_index(t_node a, int p[], int n)
{
	t_node	b;
	int		i;

	i = n;
	b = a;
	while (i != 0)
	{
		b = a;
		while (b)
		{
			if (p[i] == b->value)
			{
				b->index = i;
			}
			b = b->next;
		}
		i--;
	}
}
