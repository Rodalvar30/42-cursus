/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:52:45 by rodalvar          #+#    #+#             */
/*   Updated: 2023/01/25 16:56:48 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	insert_value(t_point *a, int n)
{
	t_point	p;

	p = malloc(sizeof(t_stack));
	p->value = n;
	p->next = *a;
	*a = p;
}

void	print_value(t_point a)
{
	while (a)
	{
		ft_printf("%d\n", a->value);
		a = a->next;
	}
}

void	free_value(t_point *p)
{
	t_point	a;

	while (*p)
	{
		a = *p;
		*p = (*p)->next;
		free(a);
	}
}
