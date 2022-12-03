/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animation_move.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:06:35 by rodalvar          #+#    #+#             */
/*   Updated: 2022/12/02 00:10:54 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	animation1(t_game *game)
{
	if (game->loop < 1000)
	{
		game->loop++;
		return (0);
	}
	game->loop = 0;
	mlx_destroy_image(game->mlx, game->img_player);
	if (game->pos_player == 1)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_d/kirby.xpm",
				&game->img_width, &game->img_height);
	else if (game->pos_player == 2)
	{
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_d/kirby.xpm",
				&game->img_width, &game->img_height);
		game->pos_player = 0;
	}
	map_draw(game);
	game->pos_player++;
	return (0);
}

int	animation2(t_game *game)
{
	if (game->loop < 1000)
	{
		game->loop++;
		return (0);
	}
	game->loop = 0;
	mlx_destroy_image(game->mlx, game->img_player);
	if (game->pos_player == 1)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_a/kirby.xpm",
				&game->img_width, &game->img_height);
	else if (game->pos_player == 2)
	{
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_a/kirby.xpm",
				&game->img_width, &game->img_height);
		game->pos_player = 0;
	}
	map_draw(game);
	game->pos_player++;
	return (0);
}

int	animation3(t_game *game)
{
	if (game->loop < 1000)
	{
		game->loop++;
		return (0);
	}
	game->loop = 0;
	mlx_destroy_image(game->mlx, game->img_player);
	if (game->pos_player == 1)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_s/kirby8.xpm",
				&game->img_width, &game->img_height);
	else if (game->pos_player == 2)
	{
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_s/kirby8.xpm",
				&game->img_width, &game->img_height);
		game->pos_player = 0;
	}
	map_draw(game);
	game->pos_player++;
	return (0);
}

int	animation4(t_game *game)
{
	if (game->loop < 1000)
	{
		game->loop++;
		return (0);
	}
	game->loop = 0;
	mlx_destroy_image(game->mlx, game->img_player);
	if (game->pos_player == 1)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_w/kirby5.xpm",
				&game->img_width, &game->img_height);
	else if (game->pos_player == 2)
	{
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_w/kirby5.xpm",
				&game->img_width, &game->img_height);
		game->pos_player = 0;
	}
	map_draw(game);
	game->pos_player++;
	return (0);
}

int	animation5(t_game *game)
{
	if (game->loop < 1000)
	{
		game->loop++;
		return (0);
	}
	game->loop = 0;
	mlx_destroy_image(game->mlx, game->img_player);
	if (game->pos_player == 1)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/map/muelto.xpm",
				&game->img_width, &game->img_height);
	else if (game->pos_player == 2)
	{
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/map/muelto.xpm",
				&game->img_width, &game->img_height);
		game->pos_player = 0;
	}
	map_draw(game);
	game->pos_player++;
	return (0);
}
