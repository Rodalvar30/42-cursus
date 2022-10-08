/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:58:59 by rodalvar          #+#    #+#             */
/*   Updated: 2022/09/26 19:39:06 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned long	i;
	char			*a;
	char			*b;

	a = dest;
	b = (char *)src;
	i = 0;
	if (!a && !b)
		return (NULL);
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dest);
}
//int main(void)
//{
//    char ft[] = "hello";
//    char sd[] = "bye";
//    printf("%s", ft_memcpy(ft,sd,sizeof(sd)));
//    return (0);
//}