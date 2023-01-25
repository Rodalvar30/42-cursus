/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:58:00 by rodalvar          #+#    #+#             */
/*   Updated: 2022/09/22 20:09:12 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	unsigned int	c;
	unsigned int	i;

	c = 0;
	i = 0;
	while (src[c])
	{
		i++;
		c++;
	}
	c = 0;
	if (destsize > 0)
	{
		while ((src[c] != '\0') && c < (destsize - 1))
		{
			dest[c] = src[c];
			c++;
		}
		dest[c] = '\0';
	}
	return (i);
}

//int main(void)
//{
//    char ft[] = "helloffffffff";
//    char sd[] = "byeeeeeeeeeee";
//    printf("%lu\n",ft_strlcpy(ft,sd,2));
//	printf("%lu", strlcpy(ft,sd,2));
//    return (0);
//}

//unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
//{
//	unsigned int	count;
//	unsigned int	i;

//	i = 0;
//	count = 0;
//	while (src[i])
//	{
//		count++;
//		i++;
//	}
//	i = 0;
//	if (size > 0)
//	{
//		while (src[i] && i < (size - 1))
//		{
//			dest[i] = src[i];
//			i++;
//		}
//		dest[i] = '\0';
//	}
//    return (count);
//}