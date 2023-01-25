/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:11:35 by rodalvar          #+#    #+#             */
/*   Updated: 2022/12/03 19:01:19 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_num(t_printf *p)
{
	int		num;
	char	*str;

	num = va_arg(p -> arg, int);
	str = ft_itoa(num);
	p -> len += ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
}
