/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pos.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:21:22 by rodalvar          #+#    #+#             */
/*   Updated: 2022/11/03 16:06:54 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static int	ft_long(unsigned int num)
{
	int	i;

	i = 0;
	while (num != 0)
	{
		i++;
		num = num / 10;
	}
	return (i);
}

static char	*ft_convert_positive(unsigned int n)
{
	char	*num;
	int		i;

	i = ft_long(n);
	num = (char *)malloc(sizeof(char) * (i + 1));
	if (!num)
		return (0);
	num[i] = '\0';
	while (n != 0)
	{
		num[i - 1] = n % 10 + 48;
		n = n / 10;
		i--;
	}
	return (num);
}

void	ft_print_pos(t_printf *p)
{
	unsigned int	num;
	char			*str_num;

	num = va_arg(p->arg, unsigned int);
	if (num == 0)
	{
		ft_putchar_fd('0', 1);
		p->len += 1;
	}
	else
	{
		str_num = ft_convert_positive(num);
		p->len += ft_strlen(str_num);
		ft_putstr_fd(str_num, 1);
		free(str_num);
	}
}
