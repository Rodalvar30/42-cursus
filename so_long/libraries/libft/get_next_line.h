/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:06:24 by rodalvar          #+#    #+#             */
/*   Updated: 2022/11/24 19:24:35 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_get_line(char *str_c);
char	*ft_get_str(char *str_c);
char	*get_read(int fd, char *str_c);
char	*get_next_line(int fd);
char	*ft_itoa(int n);
char	*ft_strdup(const char *s1);
void	*ft_calloc(size_t count, size_t size);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	ft_bzero(void *str, size_t n);
#endif
