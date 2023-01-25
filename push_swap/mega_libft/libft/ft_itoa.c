/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:33:09 by rodalvar          #+#    #+#             */
/*   Updated: 2022/09/26 18:52:22 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_long(int n)
{
	int	l;

	l = 0;
	if (n <= 0)
		l++;
	while (n != 0)
	{
		n = n / 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			l;
	long long	num;

	num = (long long)n;
	l = ft_long(n);
	str = (char *)malloc(sizeof(char) * (l + 1));
	if (!str)
		return (0);
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	if (num == 0)
		str[0] = '0';
	str[l] = '\0';
	while (num)
	{
		str[--l] = (num % 10) + '0';
		num = num / 10;
	}
	return (str);
}
