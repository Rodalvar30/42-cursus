/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:48:51 by rodalvar          #+#    #+#             */
/*   Updated: 2023/02/13 21:14:32 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_prueba
{
	int				data;
	struct s_prueba	*next;
}t_prueba;

typedef t_prueba	*t_node;


int	whitespaces(const char *str, int *ptr_i)
{
	int	count;
	int	i;

	i = 0;
	count = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			count *= -1;
		i++;
	}
	*ptr_i = i;
	return (count);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;
	int	i;

	result = 0;
	sign = whitespaces(str, &i);
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	result *= sign;
	return (result);
}

t_node create_node()
{
	t_node	temp;

	temp = (t_node)malloc(sizeof(t_prueba));
	temp->next = NULL;
	return (temp);
}

t_node	add_node(t_node head, int value)
{
	t_node	temp;
	t_node	p;

	temp = create_node();
	temp->data = value;
	if (head == NULL)
		head = temp;
	else
	{
		p = head;
		while (p->next)
			p = p->next;
		p->next = temp;
	}
	return (head);
}

int	main(int argc, char **argv)
{
	t_node	a;
	int		i;

	a = NULL;
	i = 1;
	while (i < argc)
	{
		a = add_node(a, ft_atoi(&argv[i][0]));
		i++;
	}
	while (a)
	{
		printf("%d", a->data);
		a = a->next;
	}
	return (0);
}
