/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gameplay.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:12:42 by rodalvar          #+#    #+#             */
/*   Updated: 2022/12/16 19:28:19 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

static void	game_wa(int keycode, t_game *game)
{
	if (keycode == 13)
	{
		game->y_player -= 1;
		player_w(game);
		mlx_loop_hook(game->mlx, animation_w, game);
		mlx_loop_hook(game->mlx, animation4, game);
		if (game ->endgame == 1)
			mlx_loop_hook(game->mlx, animation5, game);
		write(1, "Se presiono la tecla W\n", 23);
	}
	else if (keycode == 1)
	{
		game->y_player += 1;
		player_s(game);
		mlx_loop_hook(game->mlx, animation_s, game);
		mlx_loop_hook(game->mlx, animation3, game);
		if (game ->endgame == 1)
			mlx_loop_hook(game->mlx, animation5, game);
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
		mlx_loop_hook(game->mlx, animation_d, game);
		mlx_loop_hook(game->mlx, animation1, game);
		if (game ->endgame == 1)
			mlx_loop_hook(game->mlx, animation5, game);
		write(1, "Se presiono la tecla D\n", 23);
	}
	else if (keycode == 0)
	{
		game->x_player -= 1;
		player_a(game);
		mlx_loop_hook(game->mlx, animation_a, game);
		mlx_loop_hook(game->mlx, animation2, game);
		if (game ->endgame == 1)
			mlx_loop_hook(game->mlx, animation5, game);
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

void	easter_egg(t_game *game, int y, int x)
{
	if (game->map[y][x] == '2')
		img_draw(game, game->img_wall2, x, y);
	else if (game->map[y][x] == 'K')
		img_draw(game, game->img_enemies, x, y);
}
