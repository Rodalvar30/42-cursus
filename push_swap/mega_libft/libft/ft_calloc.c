/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:28:03 by rodalvar          #+#    #+#             */
/*   Updated: 2022/09/26 17:23:17 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*result;

	result = malloc(count * size);
	if (!result)
	{
		return (NULL);
	}
	ft_bzero(result, count * size);
	return (result);
}
//int main(void)
//{
//    int *a;

//	a = (int *)ft_calloc(4,sizeof(char));

//	for(int i = 0; i < 4; i++)
//	{
//   	 	printf("%d", a[i]);
//	}
//    return (0);
//}