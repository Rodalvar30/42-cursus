/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_putstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:28:19 by rodalvar          #+#    #+#             */
/*   Updated: 2022/11/03 16:07:18 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_print_putstr(t_printf *p)
{
	char	*str;

	str = va_arg(p -> arg, char *);
	if (!str)
		str = "(null)";
	ft_putstr_fd(str, 1);
	p -> len += ft_strlen(str);
}
