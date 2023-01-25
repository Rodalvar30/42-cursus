/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:39:21 by rodalvar          #+#    #+#             */
/*   Updated: 2023/01/25 18:09:49 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./mega_libft/libft/libft.h"
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
}	t_stack;

typedef t_stack	*t_point;

void	insert_value(t_point *a, int n);
void	print_value(t_point a);
void	free_value(t_point *p);
int		check_doubles(t_stack *a);
int		check_doubles2(t_stack *a);

#endif 