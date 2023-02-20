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
	static char	*str_concat;
	char		*line;

	if ((fd < 0) || (BUFFER_SIZE <= 0))
		return (NULL);
	str_concat = get_read_str_concat(fd, str_concat);
	if (!str_concat)
		return (NULL);
	line = ft_get_line(str_concat);
	str_concat = ft_new_str(str_concat);
	return (line);
}
