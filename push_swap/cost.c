/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 09:46:44 by rodalvar          #+#    #+#             */
/*   Updated: 2023/02/19 09:46:44 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_get_cost(t_stack **a, t_stack **b)
{
	t_node	aux_a;
	t_node	aux_b;
	int		a_size;
	int		b_size;

	aux_a = *a;
	aux_b = *b;
	a_size = stack_size(aux_a);
	b_size = stack_size(aux_b);
	while (aux_b)
	{
		aux_b->cost_b = aux_b->pos;
		if (aux_b->pos > b_size/2)
			aux_b->cost_b = (b_size - aux_b->pos) * -1;
		aux_b->cost_a = aux_b->target_pos;
		if (aux_b->target_pos > a_size/2)
			aux_b->cost_a = (a_size - aux_b->target_pos) * -1;
		aux_b = aux_b->next;
	}
}

void	cheap_move(t_stack **a, t_stack **b)
{
	t_node	aux;
	int		cheap;
	int		cost_a;
	int		cost_b;

	aux = *b;
	cheap = INT_MAX;
	while (aux)
	{
		if (abs(aux->cost_a) + abs(aux->cost_b) < abs(cheap))
		{
			cheap = abs(aux->cost_b) + abs(aux->cost_a);
			cost_a = aux->cost_a;
			cost_b = aux->cost_b;
		}
		aux = aux->next;
	}
	move(a, b, cost_a, cost_b);
}