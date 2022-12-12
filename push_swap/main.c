/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 19:03:09 by rodalvar          #+#    #+#             */
/*   Updated: 2022/12/07 19:03:09 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_push push;
	int	i;
	int j;
	int *a;
	int	*b;

	push.na = argc - 1;
	push.nb = argc - 1;
	a = (int *)malloc((push.na + push.nb)*sizeof(int));
	b = (int *)malloc((push.na + push.nb)*sizeof(int));
	if(argc > 1)
	{
		i = 0;
		j = 1;
		while (j < argc)
		{
			a[i] = ft_atoi(&argv[j][0]);
			b[i] = ft_atoi(&argv[j][0]);
			i++;
			j++;
		}
		i = 0;
		while ((size_t)i < push.na)
		{
			printf("%d\n", a[i]);
			i++;
		}
		i = 0;
		while ((size_t)i < push.nb)
		{
			printf("      %d\n", b[i]);
			i++;
		}
	}
	else
		printf("Error Syntax Invalid\n");
	return (0);
}