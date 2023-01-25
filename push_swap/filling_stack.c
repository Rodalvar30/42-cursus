/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filling_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:55:34 by rodalvar          #+#    #+#             */
/*   Updated: 2023/01/25 18:19:36 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	int		i;

	a = NULL;
	i = argc - 1;
	if (argc > 1)
	{	
		while (i > 0)
		{
			insert_value(&a, ft_atoi(&argv[i][0]));
			i--;
		}
		print_value(a);
		if (check_doubles2(a) == 0)
			ft_printf("No hay repetidos\n");
		else if (check_doubles2(a) == 1)
			ft_printf("Hay repetidos\n");
		free_value(&a);
		ft_printf("Se ha liberado el stack");
	}
	else
		ft_printf("Error Invalid Syntax");
	return (0);
}

