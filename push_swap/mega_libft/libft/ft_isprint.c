/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:59:12 by rodalvar          #+#    #+#             */
/*   Updated: 2023/02/20 21:46:19 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

//int main(void)
//{
//    printf("%d", ft_isprint(1));
//    return (0);
//}