/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:05:28 by rodalvar          #+#    #+#             */
/*   Updated: 2022/10/12 12:56:45 by rodalvar         ###   ########.fr       */
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
	static char	*str_c;
	char		*line;

	if ((fd < 0) || (BUFFER_SIZE <= 0))
		return (NULL);
	str_c = get_read(fd, str_c);
	if (!str_c)
		return (NULL);
	line = ft_get_line(str_c);
	str_c = ft_get_str(str_c);
	return (line);
}
