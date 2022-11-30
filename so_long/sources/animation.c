/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 16:45:02 by rodalvar          #+#    #+#             */
/*   Updated: 2022/11/30 20:47:04 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	swap_w(t_game *game)
{
	if (game->pos_player_w == 1)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_w/kirby1.xpm",
				&game->img_width, &game->img_height);
	else if (game->pos_player_w == 2)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_w/kirby2.xpm",
				&game->img_width, &game->img_height);
	else if (game->pos_player_w == 3)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_w/kirby3.xpm",
				&game->img_width, &game->img_height);
	else if (game->pos_player_w == 4)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_w/kirby4.xpm",
				&game->img_width, &game->img_height);
	else if (game->pos_player_w == 5)
	{
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_w/kirby5.xpm",
				&game->img_width, &game->img_height);
		game->pos_player_w = 0;
	}
}

static void	swap_s(t_game *game)
{
	if (game->pos_player_s == 1)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_s/kirby1.xpm",
				&game->img_width, &game->img_height);
	else if (game->pos_player_s == 2)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_s/kirby2.xpm",
				&game->img_width, &game->img_height);
	else if (game->pos_player_s == 3)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_s/kirby3.xpm",
				&game->img_width, &game->img_height);
	else if (game->pos_player_s == 4)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_s/kirby4.xpm",
				&game->img_width, &game->img_height);
	else if (game->pos_player_s == 5)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_s/kirby5.xpm",
				&game->img_width, &game->img_height);
	else if (game->pos_player_s == 6)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_s/kirby6.xpm",
				&game->img_width, &game->img_height);
}

int	animation_w(t_game *game)
{
	game->loop_w = 0;
	mlx_destroy_image(game->mlx, game->img_player);
	swap_w(game);
	map_draw(game);
	game->pos_player_w++;
	return (0);
}

int	animation_s(t_game *game)
{
	game->loop_s = 0;
	mlx_destroy_image(game->mlx, game->img_player);
	swap_s(game);
	if (game->pos_player_s == 7)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_s/kirby7.xpm",
				&game->img_width, &game -> img_height);
	else if (game->pos_player_s == 8)
	{
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_s/kirby8.xpm",
				&game->img_width, &game->img_height);
		game->pos_player_s = 0;
	}
	map_draw(game);
	game->pos_player_s++;
	return (0);
}
