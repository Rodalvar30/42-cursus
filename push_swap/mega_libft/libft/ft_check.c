/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:45:07 by rodalvar          #+#    #+#             */
/*   Updated: 2022/10/07 17:24:28 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_verify(const char *s, int i)
{
	if (s[i] == 'd' || s[i] == 'i')
		return (1);
	else if (s[i] == 's' || s[i] == 'p')
		return (1);
	else if (s[i] == 'u' || s[i] == 'x')
		return (1);
	else if (s[i] == 'X' || s[i] == '%')
		return (1);
	else if (s[i] == 'c')
		return (1);
	return (0);
}

char	*ft_check(const char *s)
{
	char	*result;
	int		i;

	result = (char *)malloc(sizeof(char) * 2);
	i = 0;
	while (s[i])
	{
		if (s[i] == '%' && ft_verify(s, i + 1))
		{
			result[0] = '%';
			result[1] = s[i + 1];
		}
		i++;
	}
	return (result);
}
