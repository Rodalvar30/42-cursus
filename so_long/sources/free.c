/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:23:25 by rodalvar          #+#    #+#             */
/*   Updated: 2022/12/03 16:40:56 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

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
	mlx_destroy_window(game->mlx, game->win);
	free(game->mlx);
	if (game->map)
		free_map(game);
	exit(0);
	return (0);
}
