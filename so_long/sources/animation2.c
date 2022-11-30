/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animation2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:21:53 by rodalvar          #+#    #+#             */
/*   Updated: 2022/11/30 17:38:44 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	swap_a1(t_game *game)
{
	if (game->pos_player_a == 1)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_a/kirby1.xpm",
				&game->img_width, &game->img_height);
	else if (game->pos_player_a == 2)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_a/kirby2.xpm",
				&game->img_width, &game->img_height);
	else if (game->pos_player_a == 3)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_a/kirby3.xpm",
				&game->img_width, &game->img_height);
	else if (game->pos_player_a == 4)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_a/kirby4.xpm",
				&game->img_width, &game->img_height);
	else if (game->pos_player_a == 5)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_a/kirby5.xpm",
				&game->img_width, &game->img_height);
	else if (game->pos_player_a == 6)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_a/kirby6.xpm",
				&game->img_width, &game->img_height);
}

static void	swap_aa(t_game *game)
{
	if (game->pos_player_a == 7)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_a/kirby7.xpm",
				&game->img_width, &game->img_height);
	else if (game->pos_player_a == 8)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_a/kirby8.xpm",
				&game->img_width, &game->img_height);
	else if (game->pos_player_a == 9)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_a/kirby9.xpm",
				&game->img_width, &game->img_height);
	else if (game->pos_player_a == 10)
	{
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_a/kirby10.xpm",
				&game->img_width, &game->img_height);
		game->pos_player_a = 0;
	}
}

int	animation_a(t_game *game)
{
	game->loop_a = 0;
	mlx_destroy_image(game->mlx, game->img_player);
	swap_a1(game);
	swap_aa(game);
	map_draw(game);
	game->pos_player_a++;
	return (0);
}
