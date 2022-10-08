/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:13:54 by rodalvar          #+#    #+#             */
/*   Updated: 2022/10/08 16:44:28 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

typedef struct s_printf
{
	va_list	arg;
	int		len;
	char	type;
}t_printf;

void	ft_print_putchar(t_printf *p);
void	ft_print_putstr(t_printf *p);
void	ft_print_num(t_printf *p);
void	ft_print_hexa(t_printf *p);
void	ft_print_pos(t_printf *p);
int		ft_printf(char const	*s, ...);
void	ft_print_percent(t_printf *p);
void	ft_print_pointer(t_printf *p);
#endif