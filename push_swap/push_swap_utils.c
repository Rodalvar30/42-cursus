/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 19:14:37 by rodalvar          #+#    #+#             */
/*   Updated: 2022/12/07 19:14:37 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	sa(int a[])
{
	swap(&a[0], &a[1]);
}

void	sb(int b[])
{
	swap(&b[0], &b[1]);
}

void	ss(int a[], int b[])
{
	sa(a);
	sb(b);
}

void	ra(int a[], size_t na)
{
	int	i;

	i = 1;
	while((size_t)i < na)
	{
		swap(&a[i - 1], &a[i]);
		i++;
	}
}

void	rb(int b[], size_t nb)
{
	int	i;

	i = 1;
	while((size_t)i < nb)
	{
		swap(&b[i - 1], &b[i]);
		i++;
	}
}

void	rr(int a[], int b[], size_t na, size_t nb)
{
	ra(a, na);
	rb(b, nb);
}

void	rra(int a[], size_t na)
{
	size_t	i;

	i = na - 1;
	while(i > 0)
	{
		swap(&a[i - 1], &a[i]);
		i--;
	}	
}

void	rrb(int b[], size_t nb)
{
	size_t	i;

	i = nb - 1;
	while(i > 0)
	{
		swap(&b[i - 1], &b[i]);
		i--;
	}	
}

void	rrr(int a[], int b[], size_t na, size_t nb)
{
	rra(a, na);
	rrb(b, nb);
}

void	pa(t_push *push, int a[], int b[])
{
	push -> nb += 1;
	rrb(b, push -> nb);
	b[0] = a[0];
	ra(a, push -> na);
	push -> na -= 1;
}

void	pb(t_push *push, int a[], int b[])
{
	push -> na += 1;
	rra(a, push -> na);
	a[0] = b[0];
	rb(b, push -> nb);
	push -> nb -= 1;
}

static int	whitespaces(const char *str, int *ptr_i)
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

int	ft_atoi(char *str)
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