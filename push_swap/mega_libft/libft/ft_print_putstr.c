/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_putstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:28:19 by rodalvar          #+#    #+#             */
/*   Updated: 2022/12/03 19:01:33 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_putstr(t_printf *p)
{
	char	*str;

	str = va_arg(p -> arg, char *);
	if (!str)
		str = "(null)";
	ft_putstr_fd(str, 1);
	p -> len += ft_strlen(str);
}
