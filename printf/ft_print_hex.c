/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:48:08 by rodalvar          #+#    #+#             */
/*   Updated: 2022/10/08 16:53:09 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len_hex(unsigned int num)
{
	int	cont;

	cont = 0;
	while (num != 0)
	{
		cont++;
		num = num / 16;
	}
	return (cont);
}

static void	ft_conver_hex(unsigned int num, const char s)
{
	if (num >= 16)
	{
		ft_conver_hex(num / 16, s);
		ft_conver_hex(num % 16, s);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
		{
			if (s == 'x')
				ft_putchar_fd((num - 10 + 'a'), 1);
			if (s == 'X')
				ft_putchar_fd((num - 10 + 'A'), 1);
		}
	}
}

void	ft_print_hexa(t_printf *p)
{
	unsigned int	num;

	num = va_arg(p->arg, unsigned int);
	if (num == 0)
	{
		ft_putchar_fd('0', 1);
		p->len += 1;
	}
	else
		ft_conver_hex(num, p->type);
	p->len += ft_len_hex(num);
}
