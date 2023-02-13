/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:04:41 by rodalvar          #+#    #+#             */
/*   Updated: 2023/02/13 18:51:50 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_doubles(t_stack *a)
{
	t_stack	*first;
	t_stack	*second;

	first = a;
	second = a;
	second = second->next;
	while (second)
	{
		if (first->value == second->value)
			return (1);
		first = first -> next;
		second = second->next;
	}
	return (0);
}

int	check_doubles2(t_stack *a)
{
	t_stack	*first;
	t_stack	*second;

	first = a;
	second = a;
	second = second->next;
	while (first)
	{
		while (second)
		{
			if (first->value == second->value)
				return (1);
			second = second->next;
		}
		first = first->next;
	}
	return (0);
}
