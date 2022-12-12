/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:57:53 by rodalvar          #+#    #+#             */
/*   Updated: 2022/09/29 19:20:04 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	unsigned long	i;
	char			*s;
	size_t			sd;
	size_t			ss;
	size_t			result;

	s = (char *)src;
	sd = ft_strlen(dest);
	ss = ft_strlen(s);
	result = 0;
	i = 0;
	if (destsize > sd)
		result = sd + ss;
	else
		result = ss + destsize;
	while (s[i] && (sd + 1) < destsize)
	{
		dest[sd] = s[i];
		sd++;
		i++;
	}
	dest[sd] = '\0';
	return (result);
}

//int main(void)
//{
//    char ft[8] = "helloo";
//    char sd[8] = "byhdfyhe";
//    unsigned long num = ft_strlcat(ft,sd,0);
//    printf("%lu\n", num);
//	printf("%lu",strlcat(ft,sd, 0));
//    return (0);
//}