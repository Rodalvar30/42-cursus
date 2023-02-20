/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:03:47 by rodalvar          #+#    #+#             */
/*   Updated: 2023/02/19 16:51:16 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_swap(t_stack **a, t_stack **b, int a_size)
{
	if (a_size == 2 && !ft_already_order(*a))
		sa(*a);
	else if (a_size == 3)
		sort_three(a);
	else if (a_size > 3 && !ft_already_order(*a))
		sort(a, b);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack *b;
	int		a_size;

	if(checker_input(argv, argc) == 0)
	{
		ft_printf("PUTO\n");
		exit(1);
	}
	a = NULL;
	if (argc > 1)
	{
		b = NULL;
		a = fill_stack_values(argc, argv);
		a_size = stack_size(a);
		push_swap(&a, &b, a_size);
		print_value(a);
		ft_print_index(a);
		free_value(&a);
	}
	return (0);
}
