/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gameplay.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:12:42 by rodalvar          #+#    #+#             */
/*   Updated: 2022/12/02 00:02:04 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	game_wa(int keycode, t_game *game)
{
	if (keycode == 13)
	{
		game->y_player -= 1;
		player_w(game);
		write(1, "Se presiono la tecla W\n", 23);
	}
	else if (keycode == 1)
	{
		game->y_player += 1;
		player_s(game);
		write(1, "Se presiono la tecla S\n", 23);
	}
}

static void	game_events(int keycode, t_game *game)
{
	game_wa(keycode, game);
	if (keycode == 2)
	{
		game->x_player += 1;
		player_d(game);
		write(1, "Se presiono la tecla D\n", 23);
	}
	else if (keycode == 0)
	{
		game->x_player -= 1;
		player_a(game);
		write(1, "Se presiono la tecla A\n", 23);
	}
}

static int	keypress(int keycode, t_game *game)
{
	if (keycode == 53)
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
}

