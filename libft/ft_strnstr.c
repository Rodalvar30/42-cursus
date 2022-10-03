/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:33:55 by rodalvar          #+#    #+#             */
/*   Updated: 2022/09/23 15:44:22 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{	
	unsigned int	i;
	unsigned int	j;

	if (*needle == '\0')
	{
		return ((char *)haystack);
	}
	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (0);
}
//int main(void)
//{
//    char ft[] = "hello bye heloo";
//    char sd[] = "bye";
//    printf("%s", ft_strnstr(ft,sd,sizeof(ft)));
//    return (0);
//}