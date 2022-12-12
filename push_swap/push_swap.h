/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 19:05:33 by rodalvar          #+#    #+#             */
/*   Updated: 2022/12/07 19:05:33 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>

typedef struct s_push
{
	size_t na;
	size_t nb;
} t_push;

void	swap(int *a, int *b);
void	sa(int a[]);
void	sb(int b[]);
void	ss(int a[], int b[]);
void	ra(int a[], size_t na);
void	rb(int b[], size_t nb);
void	rr(int a[], int b[], size_t na, size_t nb);
void	rra(int a[], size_t na);
void	rrb(int b[], size_t nb);
void	rrr(int a[], int b[], size_t na, size_t nb);
void	pa(t_push *push, int a[], int b[]);
void	pb(t_push *push, int a[], int b[]);
int		ft_atoi(char *str);




#endif