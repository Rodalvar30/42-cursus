/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filling_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:55:34 by rodalvar          #+#    #+#             */
/*   Updated: 2023/02/13 21:19:00 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack(t_stack *a, int argc, char **argv)
{
	int		i;
	int		*p;

	p = malloc((argc - 1) * sizeof(int));
	i = argc - 1;
	if (argc > 1)
	{	
		while (i > 0)
		{
			init_stack(a);
			insert_value(&a, ft_atoi(&argv[i][0]));
			i--;
		}
		if (check_doubles2(a) == 0 && check_doubles(a) == 0)
		{
			print_value(a);
			ft_fill_array(p, argv, argc - 1);
			ft_order(p, argc - 1);
			ft_index(a, p, argc - 1);
			ft_print_index(a);
		}
		else
		{
			free_value(&a);
			ft_printf("Syntax_Error");
		}
	}
}
