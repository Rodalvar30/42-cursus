/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:04:41 by rodalvar          #+#    #+#             */
/*   Updated: 2023/01/25 18:36:25 by rodalvar         ###   ########.fr       */
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
			return (0);
		first = first -> next;
		second = second->next;
	}
	return (1);
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
