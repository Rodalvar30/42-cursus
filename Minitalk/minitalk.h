/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:36:09 by rodalvar          #+#    #+#             */
/*   Updated: 2022/11/03 16:22:41 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct s_printf
{
	va_list	arg;
	int		len;
	char	type;
}t_printf;

int		ft_atoi(const char *str);
size_t	ft_strlen(const char *str);

void	ft_print_putchar(t_printf *p);
void	ft_print_putstr(t_printf *p);
void	ft_print_num(t_printf *p);
void	ft_print_hexa(t_printf *p);
void	ft_print_pos(t_printf *p);
int		ft_printf(char const	*s, ...);
void	ft_print_percent(t_printf *p);
void	ft_print_pointer(t_printf *p);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
char	*ft_itoa(int n);

#endif 