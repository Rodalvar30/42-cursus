/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:59:12 by rodalvar          #+#    #+#             */
/*   Updated: 2022/11/30 15:53:15 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	count_moves(t_game *game)
{
	char	*str;

	str = ft_itoa(game -> moves);
	mlx_string_put(game -> mlx, game -> win, 25, 20, 0xFFFFFF, "MOVES ");
	mlx_string_put(game -> mlx, game -> win, 100, 20, 0xFFFFFF, str);
	if (game ->endgame == 1)
	{
		mlx_string_put(game -> mlx, game -> win,
			game -> map_width / 2 - 100, 20, 0xFFFFFF, "YOU LOSE");
		mlx_string_put(game -> mlx, game -> win,
			(game -> map_width / 2) - 150, 40, 0xFFFFFF, "PRESS ESC to RETRY");
	}
	else if (game ->endgame == 2)
	{
		mlx_string_put(game -> mlx, game -> win,
			game -> map_width / 2, 20, 0xFFFFFF, "YOU WIN");
		mlx_string_put(game -> mlx, game -> win,
			(game -> map_width / 2) - 60, 40, 0xFFFFFF, "PRESS ESC to REPLAY");
	}
}
