/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:06:08 by rodalvar          #+#    #+#             */
/*   Updated: 2023/02/20 21:44:47 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

char	*ft_strjoin2(char *s1, char *s2)
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
	free(s1);
	return (str);
}

char	*ft_get_line(char *str_concat)
{
	int		i;
	char	*line;

	i = 0;
	if (!str_concat[i])
		return (NULL);
	while (str_concat[i] && str_concat[i] != '\n')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (str_concat[i] && str_concat[i] != '\n')
	{
		line[i] = str_concat[i];
		i++;
	}
	if (str_concat[i] == '\n')
	{
		line[i] = str_concat[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*ft_new_str(char *str_concat)
{
	int		i;
	int		j;
	char	*str_new;

	i = 0;
	while (str_concat[i] && str_concat[i] != '\n')
		i++;
	if (!str_concat[i])
	{
		free(str_concat);
		return (NULL);
	}
	str_new = (char *)malloc(sizeof(char) * (ft_strlen(str_concat) - i + 1));
	if (!str_new)
		return (NULL);
	i++;
	j = 0;
	while (str_concat[i])
		str_new[j++] = str_concat[i++];
	str_new[j] = '\0';
	free(str_concat);
	return (str_new);
}
