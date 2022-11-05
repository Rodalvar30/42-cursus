/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:21:36 by rodalvar          #+#    #+#             */
/*   Updated: 2022/11/03 16:07:21 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_init(t_printf *p)
{
	p ->len = 0;
	p ->type = '0';
}

int	ft_print_str(const char *s, t_printf *p, int i)
{
	p->type = s[i];
	if (p->type == 'd' || p->type == 'i')
		ft_print_num(p);
	else if (p->type == 's')
		ft_print_putstr(p);
	else if (p->type == 'u')
		ft_print_pos(p);
	else if (p->type == 'X' || p->type == 'x')
		ft_print_hexa(p);
	else if (p->type == 'c')
		ft_print_putchar(p);
	else if (p->type == 'p')
		ft_print_pointer(p);
	else if (p->type == '%')
		ft_print_percent(p);
	i++;
	return (i);
}

int	ft_printf(char const	*s, ...)
{
	t_printf	*p;
	int			lenght;
	int			i;

	p = (t_printf *)malloc(sizeof(t_printf));
	if (!p)
		return (-1);
	ft_init(p);
	va_start(p->arg, s);
	lenght = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1])
			i = ft_print_str(s, p, i + 1);
		else
		{
			p->len += write(1, &s[i], 1);
			i++;
		}	
	}
	lenght += p->len;
	va_end(p->arg);
	free(p);
	return (lenght);
}
