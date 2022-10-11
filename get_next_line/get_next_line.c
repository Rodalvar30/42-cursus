/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:05:28 by rodalvar          #+#    #+#             */
/*   Updated: 2022/10/11 18:06:17 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_str(int fd, char *str_c)
{
	char	*buff;
	ssize_t	n_bytes;

	buff = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	n_bytes = 1;
	while (!ft_strchr(str_c, '\n') && n_bytes != 0)
	{
		n_bytes = read(fd, buff, BUFFER_SIZE);
		if (n_bytes == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[n_bytes] = '\0';
		str_c = ft_strjoin(str_c, buff);
	}
	free(buff);
	return (str_c);
}

char	*get_next_line(int fd)
{
	static char	*str_c;
	char		*line;

	if ((fd < 0) || (BUFFER_SIZE <= 0))
		return (NULL);
	str_c = get_str(fd, str_c);
	if (!str_c)
		return (NULL);
	line = ft_pass_line(str_c);
	str_c = ft_get_str(str_c);
	return (line);
}
