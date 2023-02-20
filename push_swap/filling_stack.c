/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filling_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:55:34 by rodalvar          #+#    #+#             */
/*   Updated: 2023/02/14 21:37:41 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	ft_stack(t_node a, int argc, char **argv)
{
	int		i;
	int		*p;
	t_node	result;

	p = malloc((argc - 1) * sizeof(int));
	i = argc - 1;
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
		
	}
	else
	{
		free_value(&a);
		ft_printf("Syntax_Error");
	}
	result = a;
	if(!result)
		ft_printf("Tu puta madre\n");
	return (result);
}
