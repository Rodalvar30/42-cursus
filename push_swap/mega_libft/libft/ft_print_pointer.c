/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:22:07 by rodalvar          #+#    #+#             */
/*   Updated: 2022/12/03 19:01:25 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_long_pointer(unsigned long long num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

static void	ft_convert_pointer(unsigned long long num)
{
	if (num >= 16)
	{
		ft_convert_pointer(num / 16);
		ft_convert_pointer(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

void	ft_print_pointer(t_printf *p)
{
	unsigned long long	pointer;

	ft_putstr_fd("0x", 1);
	p->len += 2;
	pointer = va_arg(p->arg, unsigned long long);
	if (pointer == 0)
	{
		ft_putchar_fd('0', 1);
		p->len += 1;
	}
	else
	{
		ft_convert_pointer(pointer);
		p->len += ft_long_pointer(pointer);
	}
}
