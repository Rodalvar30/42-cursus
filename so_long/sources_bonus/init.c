/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:31:17 by rodalvar          #+#    #+#             */
/*   Updated: 2022/12/02 00:11:03 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

static void	img_init(t_game *game)
{
	game ->img_player = mlx_xpm_file_to_image(game -> mlx,
			"sprites/player/kirby_d/kirby.xpm",
			&game -> img_width, &game -> img_height);
	game ->img_door = mlx_xpm_file_to_image(game -> mlx,
			"sprites/map/door.xpm", &game -> img_width, &game -> img_height);
	game ->img_wall = mlx_xpm_file_to_image(game -> mlx,
			"sprites/map/muro.xpm", &game -> img_width, &game -> img_height);
	game ->img_tile = mlx_xpm_file_to_image(game -> mlx,
			"sprites/map/suelo.xpm", &game -> img_width, &game -> img_height);
	game ->img_enemies = mlx_xpm_file_to_image(game -> mlx,
			"sprites/enemies/waddle.xpm", &game ->img_width,
			&game -> img_height);
	game ->img_item = mlx_xpm_file_to_image(game -> mlx,
			"sprites/item/tomato.xpm", &game -> img_width, &game -> img_height);
	game ->img_wall2 = mlx_xpm_file_to_image(game -> mlx,
			"sprites/map/muro.xpm", &game -> img_width, &game -> img_height);
}

static void	size_window_init(t_game *game)
{
	int	i;

	game->map_width = ft_strlen(game->map[0]) * 63;
	i = 0;
	while (game->map[i] != (void *)0)
		i++;
	game->map_height = i * 63 + 63;
}

void	game_init(t_game *game)
{
	game->mlx = mlx_init();
	size_window_init(game);
	game->win = mlx_new_window(game->mlx,
			game->map_width, game->map_height, "so_long");
	game->moves = 0;
	game->endgame = 0;
	game->pos_player_a = 1;
	game->pos_player_s = 1;
	game->pos_player_d = 1;
	game->pos_player_w = 1;
	game->loop_w = 0;
	game->loop_a = 0;
	game->loop_d = 0;
	game->loop_s = 0;
	img_init(game);
	map_draw(game);
}
