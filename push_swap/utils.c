/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:52:45 by rodalvar          #+#    #+#             */
/*   Updated: 2023/02/19 16:49:40 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_value(t_node a)
{
	if (!a)
		ft_printf("Noo ya la cagaste\n");
	while (a)
	{
		ft_printf("%d\n", a->value);
		a = a->next;
	}
}

void	free_value(t_stack **p)
{
	t_stack	*aux;
	
	if(!p || !(*p))
		return;
	while (*p)
	{
		aux = (*p)->next;
		free(*p);
		*p = aux;
	}
	*p = NULL;
}

void	ft_exit(t_stack **a, t_stack **b)
{
	if (!a || (*a))
		free_value(a);
	if (!b || (*b))
		free_value(b);
	ft_printf("Error\n");
	exit(1);
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

void	init_stack(t_node a)
{
	int	n;

	n = 0;
	while (a)
	{
		a->index = n;
		a = a->next;
	}
}

void	ft_print_index(t_node a)
{
	if (!a)
		ft_printf("Noo ya la cagaste\n");
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

t_node last_node(t_node a)
{
	while (a && a->next)
		a = a->next;
	return (a);
}

t_node before_last_node(t_node a)
{
	while (a && a->next && a->next->next)
		a = a->next;
	return (a);
}

t_node	new_node(int value)
{
	t_node node;

	node = malloc(sizeof * node);
	if (!node)
		return (NULL);
	node->value = value;
	node->index = 0;
	node->pos = -1;
	node->target_pos = -1;
	node->cost_a = -1;
	node->cost_b = -1;
	node->next = NULL;
	return (node);
}

void	add_to_last(t_node a, t_node node)
{
	t_node	tail;

	if (!node)
		return ;
	if (!a)
	{
		tail = node;
		return ;
	}
	tail = last_node(a);
	tail->next = node;
}

t_node	fill_stack_values(int argc, char **argv)
{
	t_node		a;
	long int	nb;
	int			i;
	int		*p;

	a = NULL;
	p = malloc((argc - 1) * sizeof(int));
	nb = 0;
	i = 1;
	while (i < argc)
	{
		nb = ft_atoi(argv[i]);
		if (i == 1)
			a = new_node((int)nb);
		else
			add_to_last(a, new_node((int)nb));
		i++;
		ft_fill_array(p, argv, argc - 1);
		ft_order(p, argc - 1);
		ft_index(a, p, argc - 1);
	}
	return (a);
}

int	stack_size(t_node a)
{
	t_node aux;
	int		i;
	
	aux = a;
	i = 0;
	if (!aux)
		return (0);
	while (aux)
	{
		i++;
		aux = aux->next;
	}
	return (i);
}

int	abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

int	ft_already_order(t_stack *a)
{
	while(a->next)
	{
		if (a->value > a->next->value)
			return (0);
		a = a->next;
	}
	return (1);
}