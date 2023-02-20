/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:53:31 by rodalvar          #+#    #+#             */
/*   Updated: 2023/02/19 10:53:31 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_three(t_stack **a, t_stack **b)
{
	int a_size;
	int push;
	int i;

	a_size = stack_size(*a);
	push = 0;
	i = 0;
	while (a_size > 6 && i < a_size && push < a_size / 2)
	{
		if ((*a)->index <= a_size / 2)
		{
			pb(a, b);
			push++;
		}
		else
			ra(a);
		i++;
	}
	while (a_size - push > 3)
	{
		pb(a, b);
		push++;
	}
}

static void 	shift(t_stack **a)
{
	int low_pos;
	int	a_size;

	a_size = stack_size(*a);
	low_pos = ft_get_low_index_pos(a);
	if (low_pos > a_size / 2)
	{
		while (low_pos < a_size)
		{
			rra(a);
			low_pos++;
		}
	}
	else
	{
		while (low_pos > 0)
		{
			ra(a);
			low_pos--;
		}
	}
}

void	sort(t_stack **a, t_stack **b)
{
	push_three(a, b);
	sort_three(a);
	while (*b)
	{
		ft_target_pos(a, b);
		ft_get_cost(a, b);
		cheap_move(a, b);
	}
	if(!ft_already_order(*a))
		shift(a);
}