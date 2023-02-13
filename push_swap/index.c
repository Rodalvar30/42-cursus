/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:40:34 by rodalvar          #+#    #+#             */
/*   Updated: 2023/02/11 17:35:21 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_max(t_point a)
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

int	ft_min(t_point a)
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

void	ft_index(t_point a, int p[], int n)
{
	t_point	b;
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
