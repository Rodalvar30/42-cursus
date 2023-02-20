/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:39:21 by rodalvar          #+#    #+#             */
/*   Updated: 2023/02/19 11:08:01 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./mega_libft/libft/libft.h"
# include <limits.h>
//value(El entero que debemos ordenar)
//index(Es el indice en la lista de todos los valores que debemos ordenar)
//pos(Es la actual posicion en el stack)
//target_pos(Para los elementos del stack b, 
//es su posicion correcta en el stack a)
//cost_a(Es el precio de rotar el stack a para que el elemento llegue 
//a la posicion asignada al top del stack a)
//cost_b(Es el precio de rotar el stack b para que el elemento llegue 
//a la posicion asignada al top del stack b)
// next (Es el puntero del siguiente elemento de la lista)
typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
	struct s_stack	*back;
}	t_stack;

typedef t_stack	*t_node;

void	print_value(t_node a);
int		abs(int n);
void	free_value(t_stack **p);
void	ft_exit(t_stack **a, t_stack **b);
int		check_doubles(char **argv, int argc);
int		checker_input(char **argv, int argc);
void	ft_print_index(t_node a);
int		ft_max(t_node a);
int		ft_min(t_node a);
void	ft_fill_array(int p[], char **argv, int i);
void	ft_order(int p[], int n);
void	ft_index(t_node a, int p[], int n);
void	sa(t_node a);
void	sb(t_node b);
void	ss(t_node a, t_node b);
t_node	fill_stack_values(int argc, char **argv);
void	add_to_last(t_node a, t_node node);
t_node	new_node(int value);
t_node	before_last_node(t_node a);
t_node	last_node(t_node a);
void	ra(t_node *a);
void	rb(t_node *b);
void	rr(t_node *a, t_node *b);
void	rra(t_node *a);
void	rrb(t_node *b);
void	rrr(t_node *a, t_node *b);
void	pa(t_node *a, t_node *b);
void	pb(t_node *a, t_node *b);
int		stack_size(t_node a);
void	move(t_stack **a, t_stack **b, int cost_a, int cost_b);
int		ft_get_low_index_pos(t_stack **a);
void 	ft_target_pos(t_stack **a, t_stack **b);
void	cheap_move(t_stack **a, t_stack **b);
void	ft_get_cost(t_stack **a, t_stack **b);
void	sort_three(t_stack **a);
int		ft_already_order(t_stack *a);
void	sort(t_stack **a, t_stack **b);

void	insert_value(t_point *a, int n);
void	print_value(t_point a);
void	free_value(t_point *p);
int		check_doubles(t_stack *a);
int		check_doubles2(t_stack *a);
void	init_stack(t_point a);
void	ft_print_index(t_point a);
int		ft_max(t_point a);
int		ft_min(t_point a);
void	ft_fill_array(int p[], char **argv, int i);
void	ft_order(int p[], int n);
void	ft_index(t_point a, int p[], int n);
void	ft_stack(t_stack *a, int argc, char **argv);

#endif 