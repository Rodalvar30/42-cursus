/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animation3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:41:30 by rodalvar          #+#    #+#             */
/*   Updated: 2022/11/30 17:38:26 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	swap_d(t_game *game)
{
	if (game->pos_player_d == 1)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_d/kirby1.xpm",
				&game->img_width, &game->img_height);
	else if (game->pos_player_d == 2)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_d/kirby2.xpm",
				&game->img_width, &game->img_height);
	else if (game->pos_player_d == 3)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_d/kirby3.xpm",
				&game->img_width, &game->img_height);
	else if (game->pos_player_d == 4)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_d/kirby4.xpm",
				&game->img_width, &game->img_height);
	else if (game->pos_player_d == 5)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_d/kirby5.xpm",
				&game->img_width, &game->img_height);
	else if (game->pos_player_d == 6)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_d/kirby6.xpm",
				&game->img_width, &game->img_height);
}

static void	swap_dd(t_game *game)
{
	if (game->pos_player_d == 7)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_d/kirby7.xpm",
				&game->img_width, &game->img_height);
	else if (game->pos_player_d == 8)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_d/kirby8.xpm",
				&game->img_width, &game->img_height);
	else if (game->pos_player_d == 9)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_d/kirby9.xpm",
				&game->img_width, &game->img_height);
	else if (game->pos_player_d == 10)
	{
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_d/kirby10.xpm",
				&game->img_width, &game->img_height);
		game->pos_player_d = 0;
	}
}

int	animation_d(t_game *game)
{
	mlx_destroy_image(game->mlx, game->img_player);
	swap_d(game);
	swap_dd(game);
	map_draw(game);
	game->pos_player_d++;
	return (0);
}
