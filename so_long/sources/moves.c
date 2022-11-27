/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:59:12 by rodalvar          #+#    #+#             */
/*   Updated: 2022/11/27 15:03:20 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	count_moves(t_game *game)
{
	char	*str;

	str = ft_itoa(game -> moves);
	mlx_string_put(game -> mlx, game -> win, 25, 20, 0xFFFFFF, "MOVES: ");
	mlx_string_put(game -> mlx, game -> win, 100, 20, 0xFFFFFF, str);
}