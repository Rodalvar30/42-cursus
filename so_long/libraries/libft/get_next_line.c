/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:05:28 by rodalvar          #+#    #+#             */
/*   Updated: 2022/11/24 19:16:45 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_read(int fd, char *str_c)
{
	char	*buf;
	ssize_t	iter;

	buf = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buf)
		return (NULL);
	iter = 1;
	while (!ft_strchr(str_c, '\n') && iter != 0)
	{
		iter = read(fd, buf, BUFFER_SIZE);
		if (iter == -1)
		{
			free(buf);
			free(str_c);
			return (NULL);
		}
		buf[iter] = '\0';
		str_c = ft_strjoin(str_c, buf);
	}
	free(buf);
	return (str_c);
}

char	*get_next_line(int fd)
{
	static char	*str_co;
	char		*line;

	if ((fd < 0) || (BUFFER_SIZE <= 0))
		return (NULL);
	str_co = get_read(fd, str_co);
	if (!str_co)
		return (NULL);
	line = ft_get_line(str_co);
	str_co = ft_get_str(str_co);
	return (line);
}

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

static int	ft_long(int n)
{
	int	l;

	l = 0;
	if (n <= 0)
		l++;
	while (n != 0)
	{
		n = n / 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			l;
	long long	num;

	num = (long long)n;
	l = ft_long(n);
	str = (char *)malloc(sizeof(char) * (l + 1));
	if (!str)
		return (0);
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	if (num == 0)
		str[0] = '0';
	str[l] = '\0';
	while (num)
	{
		str[--l] = (num % 10) + '0';
		num = num / 10;
	}
	return (str);
}
