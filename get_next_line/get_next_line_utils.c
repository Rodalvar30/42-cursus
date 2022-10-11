/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:05:52 by rodalvar          #+#    #+#             */
/*   Updated: 2022/10/11 18:07:40 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
		{
			return ((char *)s + i);
		}
		i++;
	}
	if ((unsigned char)c == s[i])
	{
		return ((char *)s + i);
	}
	return (0);
}

size_t	ft_strlen(const char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;
	int		j;

	result = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		result[i] = s2[j];
		i++;
		j++;
	}
	result[i] = '\0';
	return (result);
}

char	*ft_pass_line(char *str_c)
{
	int		i;
	char	*line;

	i = 0;
	if (!str_c[i])
		return (NULL);
	while (str_c[i] && str_c[i] != '\n')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (str_c[i] && str_c[i] != '\n')
	{
		line[i] = str_c[i];
		i++;
	}
	if (str_c[i] == '\n')
	{
		line[i] = str_c[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*ft_get_str(char *str_c)
{
	int		i;
	int		j;
	char	*result;

	i = 0;
	while (str_c[i] && str_c[i] != '\n')
		i++;
	if (!str_c[i])
	{
		free(str_c);
		return (NULL);
	}
	result = (char *)malloc(sizeof(char) * (ft_strlen(str_c) - i + 1));
	if (!result)
		return (NULL);
	i++;
	j = 0;
	while (str_c[i])
		result[j++] = str_c[i++];
	result[j] = '\0';
	free(str_c);
	return (result);
}
