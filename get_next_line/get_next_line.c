/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:05:28 by rodalvar          #+#    #+#             */
/*   Updated: 2022/10/08 21:08:35 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_str(int fd, char *result)
{
	char	*buff;
	ssize_t	n_bytes;

	buff = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	n_bytes = 1;
	while (!ft_strchr(result, '\n') && n_bytes != 0)
	{
		n_bytes = read(fd, buff, BUFFER_SIZE);
		if (n_bytes == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[n_bytes] = '\0';
		result = ft_strjoin(result, buff);
	}
	free(buff);
	return (result);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*line;

	if ((fd < 0) || (BUFFER_SIZE <= 0))
		return (NULL);
	str = get_str(fd, str);
	if (!str)
		return (NULL);
	line = ft_pass_line(str);
	str = ft_get_str(str);
	return (line);
}
