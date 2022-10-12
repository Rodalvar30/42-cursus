/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:05:52 by rodalvar          #+#    #+#             */
/*   Updated: 2022/10/12 15:50:11 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		j;

	if (!s1)
	{
		s1 = (char *)malloc(1 * sizeof(char));
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (!str)
		return (NULL);
	i = -1;
	j = 0;
	if (s1)
		while (s1[++i] != '\0')
			str[i] = s1[i];
	while (s2[j] != '\0')
		str[i++] = s2[j++];
	str[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	free (s1);
	return (str);
}

char	*ft_get_line(char *str_c)
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
