/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gameplay.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:12:42 by rodalvar          #+#    #+#             */
/*   Updated: 2022/11/26 21:11:48 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	game_events(int keycode, t_game *game)
{
	if (keycode == 13)
	{
		game->y_player -= 1;
		player_w(game);
	}
	else if (keycode == 1)
	{
		game->y_player += 1;
		player_s(game);
	}
	else if (keycode == 2)
	{
		game->x_player += 1;
		player_d(game);
	}
	else if (keycode == 0)
	{
		game->x_player -= 1;
		player_a(game);
	}
}

static int	keypress(int keycode, t_game *game)
{
	if (keycode == 15)
		exit_game(game);
	else if (!game->endgame)
		game_events(keycode, game);
	return (0);
}

void	gameplay(t_game *game)
{
	mlx_hook(game->win, 2, 1L << 0, keypress, game);
	mlx_hook(game->win, 17, 1L << 17, exit_game, game);
	mlx_hook(game->win, 9, 1L << 21, map_draw, game);
	mlx_loop_hook(game->mlx, animation, game);
}
