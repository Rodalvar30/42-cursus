/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:44:58 by rodalvar          #+#    #+#             */
/*   Updated: 2022/09/26 18:35:03 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char			*result;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	result = malloc(sizeof(char) * (i + 1));
	if (result == NULL)
		return (NULL);
	j = 0;
	while (j < i)
	{
		result[j] = s1[j];
		j++;
	}
	result[j] = '\0';
	return (result);
}
//int main(void)
//{
//    char ft[] = "hello";
//    printf("%s", ft_strdup(ft));
//    return (0);
//}