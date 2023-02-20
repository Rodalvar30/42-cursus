/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:58:10 by rodalvar          #+#    #+#             */
/*   Updated: 2023/02/20 21:45:24 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


size_t	ft_strlen(const char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

//int main(void)
//{
//    printf("%zu", ft_strlen("hola"));
//    return (0);
//}