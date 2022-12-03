/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:06:06 by rodalvar          #+#    #+#             */
/*   Updated: 2022/12/02 00:11:03 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

static int	argv_checker(char *argv)
{
	int	i;

	if (!argv)
		return (0);
	i = 0;
	while (argv[i])
		i++;
	i -= 1;
	if (argv[i] == 'r' && argv[i - 1] == 'e' && argv[i - 2] == 'b'
		&& argv[i - 3] == '.')
		return (1);
	return (0);
}

void ft_void(void)
{
	system("leaks -q so_long");
}

int	main(int argc, char **argv)
{
	t_game	game;

	atexit(ft_void);
	if (argc == 2)
	{
		game.map = read_map(argv[1]);
		if (argv_checker(argv[1]) && map_checker(&game))
		{
			game_init(&game);
			gameplay(&game);
			mlx_loop(game.mlx);
		}
		else
		{
			if (game.map)
				free_map(&game);
			write(1, "Error\nInvalid Map\n", 19);
			exit(1);
		}
	}
	else
	{
		write(1, "Error\nInvalid Syntax\n", 21);
		exit(1);
	}
	return (0);
}
