/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 13:52:23 by rodalvar          #+#    #+#             */
/*   Updated: 2022/09/30 16:04:49 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const	*s1, char const *set)
{
	size_t	i;
	char	*result;

	if (!s1 || !set)
		return (0);
	while (*s1 != '\0' && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i != 0 && ft_strchr(set, s1[i]))
		i--;
	result = ft_substr(s1, 0, i + 1);
	return (result);
}

//int main(void)
//{
//	printf("%s", ft_strtrim("*-*-*30/10/2003*-*-*-*","*-"));
//}