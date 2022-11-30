/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:06:06 by rodalvar          #+#    #+#             */
/*   Updated: 2022/11/30 20:19:01 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

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

void leaks(void)
{
	system("leaks so_long");
}

int	main(int argc, char **argv)
{
	t_game	game;
	atexit(leaks);
	if (argc == 2)
	{
		game.map = read_map(argv[1]);
		if (argv_checker(argv[1]) && map_checker(&game))
		{
			game_init(&game);
			gameplay(&game);
			mlx_loop(game.mlx);
			if (game.map)
				free_map(&game);
		}
		else
		{
			if (game.map)
				free_map(&game);
			printf("Error\nInvalid Map\n");
			exit(1);
		}
	}
	else
	{
		free_map(&game);
		printf("Error\nInvalid Syntax\n");
		exit(1);
	}
	return (0);
}
