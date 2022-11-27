/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:46:02 by rodalvar          #+#    #+#             */
/*   Updated: 2022/11/27 18:24:40 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	img_draw(t_game *game, void *image, int x, int y)
{
	mlx_put_image_to_window
		(game->mlx, game->win, image, x * 64, y * 64 + 64);
}

static void	player_draw(t_game *game, void *image, int x, int y)
{
	game->x_player = x;
	game->y_player = y;
	img_draw(game, image, x, y);
}

static void	exit_draw(t_game *game, int x, int y)
{
	if (game->n_item == 0)
	{
		game->img_door = mlx_xpm_file_to_image
			(game->mlx, "sprites/map/salida.xpm",
				&game->img_width, &game->img_height);
	}
	img_draw(game, game->img_door, x, y);
}

int	map_draw(t_game *game)
{
	int	y;
	int	x;

	y = -1;
	while (game->map[++y])
	{
		x = -1;
		while (game->map[y][++x])
		{
			if (game->map[y][x] == '1')
				img_draw(game, game->img_wall, x, y);
			else if (game->map[y][x] == '0')
				img_draw(game, game->img_tile, x, y);
			else if (game->map[y][x] == 'P')
				player_draw(game, game->img_player, x, y);
			else if (game->map[y][x] == 'C')
				img_draw(game, game->img_item, x, y);
			else if (game->map[y][x] == 'E')
				exit_draw(game, x, y);
			else if (game->map[y][x] == 'K')
				img_draw(game, game->img_enemies, x, y);
		}
	}
	count_moves(game);
	return (0);
}

void	tombstone_draw(t_game *game)
{
	mlx_destroy_image(game->mlx, game->img_player);
	mlx_clear_window(game->mlx, game->win);
	game->img_player = mlx_xpm_file_to_image
		(game->mlx, "sprites/map/muelto.xpm",
			&game->img_width, &game->img_height);
	game->endgame = 1;
	map_draw(game);
}
