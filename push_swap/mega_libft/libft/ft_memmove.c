/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:58:55 by rodalvar          #+#    #+#             */
/*   Updated: 2022/09/29 19:26:48 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

static void	ft_nul(char *a, char *b, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		a[i] = b[i];
		i++;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned int	i;
	char			*a;
	char			*b;

	a = (char *)dest;
	b = (char *)src;
	if (!dest && !src)
		return (NULL);
	i = 0;
	if (a > b)
	{
		i = len;
		while (i > 0)
		{
			a[i - 1] = b[i - 1];
			i--;
		}
	}
	else
	{
		ft_nul(a, b, len);
	}
	return (dest);
}
//int main(void)
//{
//	char dest[] = "holaaaaa";
//	char src[] = "lorem ipum dolor sit a";
//	if (dest != ft_memmove(dest, src, 8))
//        write(1, "dest's adress was not returned\n", 31);
//    write(1, dest, 22);
//}