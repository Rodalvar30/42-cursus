/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:23:25 by rodalvar          #+#    #+#             */
/*   Updated: 2022/12/02 00:11:01 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	free_map(t_game *game)
{
	int	i;

	i = 0;
	while (game->map[i])
	{	
		free(game->map[i]);
		i++;
	}
	free(game -> map);
}

int	exit_game(t_game *game)
{
	mlx_destroy_image(game->mlx, game->img_tile);
	mlx_destroy_image(game->mlx, game->img_wall);
	mlx_destroy_image(game->mlx, game->img_player);
	mlx_destroy_image(game->mlx, game->img_item);
	mlx_destroy_image(game->mlx, game->img_door);
	mlx_destroy_image(game->mlx, game->img_enemies);
	mlx_destroy_window(game->mlx, game->win);
	free(game->mlx);
	if (game->map)
		free_map(game);
	exit(0);
	return (0);
}
