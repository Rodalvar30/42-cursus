/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:08:13 by rodalvar          #+#    #+#             */
/*   Updated: 2022/12/02 00:05:20 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../libraries/mlx/mlx.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "../libraries/libft/get_next_line.h"

typedef struct s_game
{
	void	*mlx;
	void	*win;
	char	**map;
	void	*img_tile;
	void	*img_wall;
	void	*img_player;
	void	*img_item;
	void	*img_door;
	int		map_width;
	int		map_height;
	int		img_width;
	int		img_height;
	int		n_exit;
	int		n_player;
	int		n_item;
	int		x_player;
	int		y_player;
	int		moves;
	int		endgame;
}	t_game;

void	free_map(t_game *game);
char	**read_map(char *file);
int		exit_game(t_game *game);
void	game_init(t_game *game);
int		exit_game(t_game *game);
int		map_draw(t_game *game);
void	count_moves(t_game *game);
void	gameplay(t_game *game);
void	player_w(t_game *game);
void	player_s(t_game *game);
void	player_d(t_game *game);
void	player_a(t_game *game);
void	img_draw(t_game *game, void *image, int x, int y);
void	tombstone_draw(t_game *game);
int		map_checker(t_game *game);

#endif