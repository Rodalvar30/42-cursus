/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:21:05 by rodalvar          #+#    #+#             */
/*   Updated: 2023/02/19 10:21:05 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_high_index(t_node a)
{
	int	index;
	index = a->index;
	while (a)
	{
		if (a->index >index)
			index = a->index;
		a = a->next;
	}
	return (index);
}

void sort_three(t_stack **a)
{
	int	high;
	if(ft_already_order(*a))
		return;
	high = get_high_index(*a);
	if((*a)->index == high)
		ra(a);
	else if ((*a)->next->index == high)
		rra(a);
	if ((*a)->index > (*a)->next->index)
		sa(*a);
}