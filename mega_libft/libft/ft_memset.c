/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:58:50 by rodalvar          #+#    #+#             */
/*   Updated: 2022/09/20 15:58:50 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned int		i;
	char				*temp;

	i = 0;
	temp = str;
	while (i < n)
	{
		temp[i] = (char)c;
		i++;
	}
	return (temp);
}

////int main(void)
////{
////    char str[] = "hola como estas";
////    printf("%s", ft_memset(str,'H', 4));
////    return (0);
////}