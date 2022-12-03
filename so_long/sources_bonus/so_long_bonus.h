/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:08:13 by rodalvar          #+#    #+#             */
/*   Updated: 2022/12/02 00:09:36 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H

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
	void	*img_enemies;
	void	*img_item;
	void	*img_door;
	void	*img_wall2;
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
	int		pos_player;
	int		pos_player_w;
	int		pos_player_a;
	int		pos_player_d;
	int		pos_player_s;
	int		loop_w;
	int		loop_d;
	int		loop_a;
	int		loop_s;
	int		loop;
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
int		animation_w(t_game *game);
int		animation_s(t_game *game);
int		animation_d(t_game *game);
int		animation_a(t_game *game);
void	tombstone_draw(t_game *game);
int		map_checker(t_game *game);
int		animation1(t_game *game);
int		animation2(t_game *game);
int		animation3(t_game *game);
int		animation4(t_game *game);
int		animation5(t_game *game);
void	easter_egg(t_game *game, int y, int x);

#endif