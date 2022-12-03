/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:22:18 by pbengoec          #+#    #+#             */
/*   Updated: 2022/10/07 13:51:56 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	put_letter(int num)
{
	if (num == 10)
		return ('A');
	else if (num == 11)
		return ('B');
	else if (num == 12)
		return ('C');
	else if (num == 13)
		return ('D');
	else if (num == 14)
		return ('E');
	else if (num == 15)
		return ('F');
	return (0);
}

void	ft_conver_hexa(int num)
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
