/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:52:45 by rodalvar          #+#    #+#             */
/*   Updated: 2023/02/13 21:30:22 by rodalvar         ###   ########.fr       */
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
	if (!a)
		ft_printf("Esta vacio");
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

void	ft_fill_array(int p[], char **argv, int n)
{		
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (j < n)
	{
		p[j] = ft_atoi(&argv[i][0]);
		i++;
		j++;
	}
}

void	init_stack(t_point a)
{
	int	n;

	n = 0;
	while (a)
	{
		a->index = n;
		a = a->next;
	}
}

void	ft_print_index(t_point a)
{
	if (!a)
		ft_printf("Esta vacio");
	while (a)
	{
		ft_printf("Indice %d\n", a->index + 1);
		a = a->next;
	}
}

void ft_order(int p[], int n)
{
	int	i;
	int	j;
	int aux;

	i = 0;
	aux = 0;
	i = 0;
	while (i < n)
	{
		j = i + 1;
		while (j < n)
		{
			if (p[i] > p[j])
			{
				aux = p[i];
				p[i] = p[j];
				p[j] = aux;
			}
			j++;
		}
		i++;
	}
}
