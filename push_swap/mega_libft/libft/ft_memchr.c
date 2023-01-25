/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:19:21 by rodalvar          #+#    #+#             */
/*   Updated: 2022/09/23 15:35:13 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned long	i;
	unsigned char	*a;

	i = 0;
	a = (unsigned char *)s;
	while (i < n)
	{
		if (a[i] == (unsigned char)c)
		{
			return (a + i);
		}
		i++;
	}
	return (NULL);
}

//int main(void)
//{
//    int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
//    printf("%s", (char *)ft_memchr(tab, -1, 7));
//}