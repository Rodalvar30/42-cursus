/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:58:33 by rodalvar          #+#    #+#             */
/*   Updated: 2022/09/23 13:03:22 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

//int main(void)
//{
//	int i;
//	int c;
//    i = 'A';
//    while (i <= 'z')
//    {
//        c = ft_toupper(i);
//        write(1, &c, 1);
//        i++;
//    }
//}