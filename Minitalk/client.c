/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:04:48 by rodalvar          #+#    #+#             */
/*   Updated: 2022/11/05 19:55:51 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/wait.h>
#include "minitalk.h"

void	ft_send(unsigned char str, int pid_s)
{
	unsigned int	i;

	i = 128;
	while (i > 0)
	{
		if (i & str)
			kill(pid_s, SIGUSR2);
		else
			kill(pid_s, SIGUSR1);
		i >>= 1;
		usleep(50);
	}
}

void	ft_signal_back(int sig)
{
	static int	sig_back;

	if (sig == SIGUSR2)
		sig_back++;
	else
		exit(ft_printf("[Message Received] Byte_sent: %d", sig_back));
}

int	main(int argc, char **argv)
{
	const char	*str;
	size_t		i;

	str = argv[2];
	i = 0;
	if (argc == 3)
	{
		signal(SIGUSR1, ft_signal_back);
		signal(SIGUSR2, ft_signal_back);
		while (i <= ft_strlen(str))
		{
			ft_send(str[i], ft_atoi(argv[1]));
			i++;
		}
		while (1)
			pause();
	}
	return (0);
}
