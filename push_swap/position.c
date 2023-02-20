/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 09:16:47 by rodalvar          #+#    #+#             */
/*   Updated: 2023/02/19 09:16:47 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void ft_get_pos(t_stack **a)
{
	t_node	aux;
	int		i;

	aux = *a;
	i = 0;
	while (aux)
	{
		aux->pos = i;
		aux = aux->next;
		i++;
	}

}

int	ft_get_low_index_pos(t_stack **a)
{
	t_node	aux;
	int		low_idx;
	int		low_pos;

	aux = *a;
	low_idx = INT_MAX;
	ft_get_pos(a);
	low_pos = aux->pos;
	while(aux)
	{
		if (aux->index < low_idx)
		{
			low_idx = aux->index;
			low_pos = aux->pos;
		}
		aux = aux->next;
	}
	return (low_pos);
}

static int	ft_get_target(t_stack **a, int b_index, int target_index, int target_pos)
{
	t_node	aux;

	aux = *a;
	while (aux)
	{
		if (aux->index > b_index && aux->index < target_index)
		{
			target_index = aux->index;
			target_pos = aux->pos;
		}
		aux = aux->next;
	}
	if (target_index != INT_MAX)
		return (target_pos);
	aux = *a;
	while (aux)
	{
		if (aux->index < target_index)
		{
			target_index = aux->index;
			target_pos = aux->pos;
		}
		aux = aux->next;
	}
	return (target_pos);
}

void ft_target_pos(t_stack **a, t_stack **b)
{
	t_node	aux;
	int		target_pos;

	aux = *b;
	ft_get_pos(a);
	ft_get_pos(b);
	target_pos = 0;
	while (aux)
	{
		target_pos = ft_get_target(a, aux->index, INT_MAX, target_pos);
		aux->target_pos = target_pos;
		aux = aux->next;
	}
}