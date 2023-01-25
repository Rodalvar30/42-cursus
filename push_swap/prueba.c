/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:48:51 by rodalvar          #+#    #+#             */
/*   Updated: 2023/01/25 18:04:45 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_doubles(int a[])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = i + 1;
		while (j < 4)
		{
			if (a[i] == a[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	int a[4] = {1, 3, 3, 4};

	if (check_doubles(a) == 1)
		printf("Hay repetidos");
	else if (check_doubles(a) == 0)
		printf("No hay repetidos");
	return (0);
}