/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:05:56 by rodalvar          #+#    #+#             */
/*   Updated: 2022/12/03 19:01:17 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	put_letter(int num)
{
	if (num == 10)
		return ('a');
	else if (num == 11)
		return ('b');
	else if (num == 12)
		return ('c');
	else if (num == 13)
		return ('d');
	else if (num == 14)
		return ('e');
	else if (num == 15)
		return ('f');
	return (0);
}

int	ft_conver_hexa2(int num)
{
	if (num > 16)
	{
		ft_conver_hexa(num / 16);
		if (num % 16 > 9)
			ft_putchar_fd(put_letter(num % 16), 1);
		else
		{
			num %= 16;
			ft_putchar_fd(num + 48, 1);
		}
	}
	else
	{
		if (num > 9)
			ft_putchar_fd(put_letter(num % 16), 1);
		else
		{
			ft_putchar_fd(num + 48, 1);
		}
	}
}

void	ft_print_hex(t_printf *p)
{
	int	num;

	num = (int)va_arg(p -> arg, int);
	ft_conver_hexa(num);
	p -> len += ft_strlen(num);
}
