/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:26:57 by rodalvar          #+#    #+#             */
/*   Updated: 2023/02/18 19:40:25 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//void	sa(t_stack **a)
//{
//	t_stack	*temp;

//	temp = (*a)->next;
//	(*a)->next = (*a)->next->next;
//	temp->next = *a;
//	*a = temp;
//}

static void	swap(t_node a)
{
	int	aux;
	if(!a || !a->next)
		return;
	aux = a->value;
	a->value = a->next->value;
	a->next->value = aux;
	aux = a->index;
	a->index = a->next->index;
	a->next->index = aux;
}

static void	rotate(t_stack **a)
{
	t_node	aux;
	t_node	tail;
	
	aux	= *a;
	(*a) = (*a)->next;
	tail = last_node(*a);
	aux->next = NULL;
	tail->next = aux;
}

static void reverse_rotate(t_stack **a)
{
	t_node	aux;
	t_node	tail;
	t_node	before_tail;

	tail = last_node(*a);
	before_tail = before_last_node(*a);
	aux = *a;
	*a = tail;
	(*a)->next = aux;
	before_tail->next = NULL;
}

static void	push(t_stack **a, t_stack **b)
{
	t_node aux;

	if(!*a)
		return;
	aux = (*a)->next;
	(*a)->next = *b;
	*b = *a;
	*a = aux;
}

void	sa(t_node a)
{
	swap(a);
	ft_printf("sa\n");
}

void	sb(t_node b)
{
	swap(b);
	ft_printf("sb\n");
}

void	ss(t_node a, t_node b)
{
	swap(a);
	swap(b);
	ft_printf("ss\n");
}

void	ra(t_node *a)
{
	rotate(a);
	ft_printf("ra\n");
}

void	rb(t_node *b)
{
	rotate(b);
	ft_printf("rb\n");
}

void	rr(t_node *a, t_node *b)
{
	rotate(a);
	rotate(b);
	ft_printf("rr");
}

void	rra(t_node *a)
{
	reverse_rotate(a);
	ft_printf("rra\n");
}

void	rrb(t_node *b)
{
	reverse_rotate(b);
	ft_printf("rrb\n");
}

void	rrr(t_node *a, t_node *b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	ft_printf("rrr");
}

void	pa(t_node *a, t_node *b)
{
	push(b,a);
	ft_printf("pa\n");
}

void	pb(t_node *a, t_node *b)
{
	push(a,b);
	ft_printf("pb\n");
}