/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 16:45:02 by rodalvar          #+#    #+#             */
/*   Updated: 2022/11/27 16:05:45 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

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
			(game->mlx, "sprites/player/kirby_d/kirby.xpm", &game->img_width, &game->img_height);
	else if (game->pos_player == 2)
	{
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_d/kirby.xpm", &game->img_width, &game->img_height);
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
			(game->mlx, "sprites/player/kirby_a/kirby.xpm", &game->img_width, &game->img_height);
	else if (game->pos_player == 2)
	{
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_a/kirby.xpm", &game->img_width, &game->img_height);
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
			(game->mlx, "sprites/player/kirby_s/kirby8.xpm", &game->img_width, &game->img_height);
	else if (game->pos_player == 2)
	{
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_s/kirby8.xpm", &game->img_width, &game->img_height);
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
			(game->mlx, "sprites/player/kirby_w/kirby5.xpm", &game->img_width, &game->img_height);
	else if (game->pos_player == 2)
	{
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_w/kirby5.xpm", &game->img_width, &game->img_height);
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
			(game->mlx, "sprites/map/muelto.xpm", &game->img_width, &game->img_height);
	else if (game->pos_player == 2)
	{
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/map/muelto.xpm", &game->img_width, &game->img_height);
		game->pos_player = 0;
	}
	map_draw(game);
	game->pos_player++;
	return (0);
}
int	animation_w(t_game *game)
{
	if (game->loop_w < 1000)
	{
		game->loop_w++;
		return (0);
	}
	game->loop_w = 0;
	mlx_destroy_image(game->mlx, game->img_player);
	if (game->pos_player_w == 1)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_w/kirby1.xpm", &game->img_width, &game->img_height);
	else if (game->pos_player_w == 2)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_w/kirby2.xpm", &game->img_width, &game->img_height);
	else if (game->pos_player_w == 3)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_w/kirby3.xpm", &game->img_width, &game->img_height);
	else if (game->pos_player_w == 4)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_w/kirby4.xpm", &game->img_width, &game->img_height);
	else if (game->pos_player_w == 5)
	{
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_w/kirby5.xpm", &game->img_width, &game->img_height);
		game->pos_player_w = 0;
	}
	map_draw(game);
	game->pos_player_w++;
	return (0);
}

int	animation_s(t_game *game)
{
	if (game->loop_s < 1000)
	{
		game->loop_s++;
		return (0);
	}
	game->loop_s = 0;
	mlx_destroy_image(game->mlx, game->img_player);
	if (game->pos_player_s == 1)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_s/kirby1.xpm", &game->img_width, &game->img_height);
	else if (game->pos_player_s == 2)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_s/kirby2.xpm", &game->img_width, &game->img_height);
	else if (game->pos_player_s == 3)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_s/kirby3.xpm", &game->img_width, &game->img_height);
	else if (game->pos_player_s == 4)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_s/kirby4.xpm", &game->img_width, &game->img_height);
	else if (game->pos_player_s == 5)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_s/kirby5.xpm", &game->img_width, &game->img_height);
	else if (game->pos_player_s == 6)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_s/kirby6.xpm", &game->img_width, &game->img_height);
	else if (game->pos_player_s == 7)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_s/kirby7.xpm", &game->img_width, &game->img_height);		
	else if (game->pos_player_s == 8)
	{
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_s/kirby8.xpm", &game->img_width, &game->img_height);
		game->pos_player_s = 0;
	}
	map_draw(game);
	game->pos_player_s++;
	return (0);
}

int	animation_a(t_game *game)
{
	if (game->loop_a < 1000)
	{
		game->loop_a++;
		return (0);
	}
	game->loop_a = 0;
	mlx_destroy_image(game->mlx, game->img_player);
	if (game->pos_player_a == 1)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_a/kirby1.xpm", &game->img_width, &game->img_height);
	else if (game->pos_player_a == 2)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_a/kirby2.xpm", &game->img_width, &game->img_height);
	else if (game->pos_player_a == 3)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_a/kirby3.xpm", &game->img_width, &game->img_height);
	else if (game->pos_player_a == 4)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_a/kirby4.xpm", &game->img_width, &game->img_height);
	else if (game->pos_player_a == 5)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_a/kirby5.xpm", &game->img_width, &game->img_height);
	else if (game->pos_player_a == 6)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_a/kirby6.xpm", &game->img_width, &game->img_height);
	else if (game->pos_player_a == 7)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_a/kirby7.xpm", &game->img_width, &game->img_height);
	else if (game->pos_player_a == 8)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_a/kirby8.xpm", &game->img_width, &game->img_height);
	else if (game->pos_player_a == 9)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_a/kirby9.xpm", &game->img_width, &game->img_height);
	else if (game->pos_player_a == 10)
	{
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_a/kirby10.xpm", &game->img_width, &game->img_height);
		game->pos_player_a = 0;
	}
	map_draw(game);
	game->pos_player_a++;
	return (0);
}

int	animation_d(t_game *game)
{
	if (game->loop_d < 1000)
	{
		game->loop_d++;
		return (0);
	}
	game->loop_d = 0;
	mlx_destroy_image(game->mlx, game->img_player);
	if (game->pos_player_d == 1)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_d/kirby1.xpm", &game->img_width, &game->img_height);
	else if (game->pos_player_d == 2)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_d/kirby2.xpm", &game->img_width, &game->img_height);
	else if (game->pos_player_d == 3)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_d/kirby3.xpm", &game->img_width, &game->img_height);
	else if (game->pos_player_d == 4)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_d/kirby4.xpm", &game->img_width, &game->img_height);
	else if (game->pos_player_d == 5)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_d/kirby5.xpm", &game->img_width, &game->img_height);
	else if (game->pos_player_d == 6)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_d/kirby6.xpm", &game->img_width, &game->img_height);
	else if (game->pos_player_d == 7)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_d/kirby7.xpm", &game->img_width, &game->img_height);
	else if (game->pos_player_d == 8)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_d/kirby8.xpm", &game->img_width, &game->img_height);
	else if (game->pos_player_d == 9)
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_d/kirby9.xpm", &game->img_width, &game->img_height);
	else if (game->pos_player_d == 10)
	{
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_d/kirby10.xpm", &game->img_width, &game->img_height);
		game->pos_player_d = 0;
	}
	map_draw(game);
	game->pos_player_d++;
	return (0);
}