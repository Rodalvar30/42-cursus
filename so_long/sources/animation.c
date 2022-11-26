/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 16:45:02 by rodalvar          #+#    #+#             */
/*   Updated: 2022/11/26 20:53:17 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	animation(t_game *game)
{
	if (game->loop < 1000)
	{
		game->loop++;
		return (0);
	}
	game->loop = 0;
	mlx_destroy_image(game->mlx, game->img_player);
	if (game->pos_enemies == 1)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby1.xpm", &game->img_width, &game->img_height);
	else if (game->pos_enemies == 2)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby2.xpm", &game->img_width, &game->img_height);
	else if (game->pos_enemies == 3)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby3.xpm", &game->img_width, &game->img_height);
	else if (game->pos_enemies == 4)
	{
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby4.xpm", &game->img_width, &game->img_height);
		game->pos_enemies = 0;
	}
	map_draw(game);
	game->pos_enemies++;
	return (0);
}
