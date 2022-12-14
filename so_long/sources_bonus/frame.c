/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frame.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:19:09 by rodalvar          #+#    #+#             */
/*   Updated: 2022/12/02 00:11:00 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

static void	player_update_image(char key, t_game *game)
{
	mlx_destroy_image(game->mlx, game->img_player);
	if (key == 'w')
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_w/kirby1.xpm",
				&game->img_width, &game->img_height);
	else if (key == 's')
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_s/kirby1.xpm",
				&game->img_width, &game->img_height);
	else if (key == 'd')
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_d/kirby1.xpm",
				&game->img_width, &game->img_height);
	else if (key == 'a')
		game->img_player = mlx_xpm_file_to_image
			(game->mlx, "sprites/player/kirby_a/kirby1.xpm",
				&game->img_width, &game->img_height);
}

void	player_w(t_game *game)
{
	player_update_image('w', game);
	if (game->map[game->y_player][game->x_player] == 'E' && game->n_item == 0)
	{
		game->map[game->y_player + 1][game->x_player] = '0';
		game->moves++;
		game->endgame = 2;
		mlx_clear_window(game->mlx, game->win);
		map_draw(game);
	}
	else if (game->map[game->y_player][game->x_player] == 'K')
		tombstone_draw(game);
	else if (game->map[game->y_player][game->x_player] == '1'
			|| game->map[game->y_player][game->x_player] == 'E')
		game->y_player += 1;
	else
	{
		if (game->map[game->y_player][game->x_player] == 'C')
			game->n_item -= 1;
		game->map[game->y_player][game->x_player] = 'P';
		game->map[game->y_player + 1][game->x_player] = '0';
		game->moves++;
		mlx_clear_window(game->mlx, game->win);
		map_draw(game);
	}
}

void	player_s(t_game *game)
{
	player_update_image('s', game);
	if (game->map[game->y_player][game->x_player] == 'E' && game->n_item == 0)
	{
		game->map[game->y_player - 1][game->x_player] = '0';
		game->moves++;
		game->endgame = 2;
		mlx_clear_window(game->mlx, game->win);
		map_draw(game);
	}
	else if (game->map[game->y_player][game->x_player] == 'K')
		tombstone_draw(game);
	else if (game->map[game->y_player][game->x_player] == '1'
			|| game->map[game->y_player][game->x_player] == 'E')
		game->y_player -= 1;
	else
	{
		if (game->map[game->y_player][game->x_player] == 'C')
			game->n_item -= 1;
		game->map[game->y_player][game->x_player] = 'P';
		game->map[game->y_player - 1][game->x_player] = '0';
		game->moves++;
		mlx_clear_window(game->mlx, game->win);
		map_draw(game);
	}
}

void	player_d(t_game *game)
{
	player_update_image('d', game);
	if (game->map[game->y_player][game->x_player] == 'E' && game->n_item == 0)
	{
		game->map[game->y_player][game->x_player - 1] = '0';
		game->moves++;
		game->endgame = 2;
		mlx_clear_window(game->mlx, game->win);
		map_draw(game);
	}
	else if (game->map[game->y_player][game->x_player] == 'K')
		tombstone_draw(game);
	else if (game->map[game->y_player][game->x_player] == '1'
			|| game->map[game->y_player][game->x_player] == 'E')
		game->x_player -= 1;
	else
	{
		if (game->map[game->y_player][game->x_player] == 'C')
			game->n_item -= 1;
		game->map[game->y_player][game->x_player] = 'P';
		game->map[game->y_player][game->x_player - 1] = '0';
		game->moves++;
		mlx_clear_window(game->mlx, game->win);
		map_draw(game);
	}
}

void	player_a(t_game *game)
{
	player_update_image('a', game);
	if (game->map[game->y_player][game->x_player] == 'E' && game->n_item == 0)
	{
		game->map[game->y_player][game->x_player + 1] = '0';
		game->moves++;
		game->endgame = 2;
		mlx_clear_window(game->mlx, game->win);
		map_draw(game);
	}
	else if (game->map[game->y_player][game->x_player] == 'K')
		tombstone_draw(game);
	else if (game->map[game->y_player][game->x_player] == '1'
			|| game->map[game->y_player][game->x_player] == 'E')
		game->x_player += 1;
	else
	{
		if (game->map[game->y_player][game->x_player] == 'C')
			game->n_item -= 1;
		game->map[game->y_player][game->x_player] = 'P';
		game->map[game->y_player][game->x_player + 1] = '0';
		game->moves++;
		mlx_clear_window(game->mlx, game->win);
		map_draw(game);
	}
}
