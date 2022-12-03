/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_putchar.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:02:17 by rodalvar          #+#    #+#             */
/*   Updated: 2022/12/03 19:01:30 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_putchar(t_printf *p)
{
	char	c;

	c = (char)va_arg(p ->arg, int);
	ft_putchar_fd(c, 1);
	p -> len += 1;
}
