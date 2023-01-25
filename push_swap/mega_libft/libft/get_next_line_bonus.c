/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:04:37 by rodalvar          #+#    #+#             */
/*   Updated: 2022/10/12 10:04:37 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*get_read_str_concat(int fd, char *str_concat)
{
	char	*buf;
	ssize_t	iter;

	buf = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buf)
		return (NULL);
	iter = 1;
	while (!ft_strchr(str_concat, '\n') && iter != 0)
	{
		iter = read(fd, buf, BUFFER_SIZE);
		if (iter == -1)
		{
			free(buf);
			free(str_concat);
			return (NULL);
		}
		buf[iter] = '\0';
		str_concat = ft_strjoin2(str_concat, buf);
	}
	free(buf);
	return (str_concat);
}

char	*get_next_line(int fd)
{
	static char	*str_concat[4096];
	char		*line;

	if ((fd < 0) || (BUFFER_SIZE <= 0))
		return (NULL);
	str_concat[fd] = get_read_str_concat(fd, str_concat[fd]);
	if (!str_concat[fd])
		return (NULL);
	line = ft_get_line(str_concat[fd]);
	str_concat[fd] = ft_new_str(str_concat[fd]);
	return (line);
}
