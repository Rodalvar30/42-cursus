/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:31:17 by rodalvar          #+#    #+#             */
/*   Updated: 2022/11/26 20:53:34 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	img_init(t_game *game)
{
	game ->img_player = mlx_xpm_file_to_image(game -> mlx,
			"sprites/player/kirby1.xpm", &game -> img_width, &game -> img_height);
	game ->img_door = mlx_xpm_file_to_image(game -> mlx,
			"sprites/map/door.xpm", &game -> img_width, &game -> img_height);
	game ->img_wall = mlx_xpm_file_to_image(game -> mlx,
			"sprites/map/muro.xpm", &game -> img_width, &game -> img_height);
	game ->img_tile = mlx_xpm_file_to_image(game -> mlx,
			"sprites/map/suelo.xpm", &game -> img_width, &game -> img_height);
	game ->img_enemies = mlx_xpm_file_to_image(game -> mlx,
			"sprites/enemies/waddle.xpm", &game -> img_width, &game -> img_height);
	game ->img_item = mlx_xpm_file_to_image(game -> mlx,
			"sprites/item/tomato.xpm", &game -> img_width, &game -> img_height);
}

static void	size_window_init(t_game *game)
{
	int	i;

	game->map_width = ft_strlen(game->map[0]) * 32;
	i = 0;
	while (game->map[i] != (void *)0)
		i++;
	game->map_height = i * 32 + 32;
}

void	game_init(t_game *game)
{
	game->mlx = mlx_init();
	size_window_init(game);
	game->win = mlx_new_window(game->mlx, game->map_width, game->map_height, "so_long");
	game->moves = 0;
	game->endgame = 0;
	game->pos_enemies = 1;
	game->loop = 0;
	img_init(game);
	map_draw(game);
}
