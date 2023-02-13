/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:03:47 by rodalvar          #+#    #+#             */
/*   Updated: 2023/02/13 21:21:12 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	main(int argc, char **argv)
{
	t_stack	*a;

	a = NULL;
	if (argc > 1)
	{
		ft_stack(a, argc, argv);
	}
	return (0);
}
