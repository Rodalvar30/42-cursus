/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:59:45 by rodalvar          #+#    #+#             */
/*   Updated: 2023/02/20 21:46:02 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *str, size_t n)
{
	unsigned int		i;
	char				*a;

	i = 0;
	a = (char *)str;
	while (i < n)
	{
		a[i] = '\0';
		i++;
	}
}
//int	main(void)
//{
//	char str[] = "hola como estas te ves igual";
//	ft_bzero(str, 1);
//	printf("%s", str);
//	return (0);
//}