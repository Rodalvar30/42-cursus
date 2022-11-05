/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:05:34 by rodalvar          #+#    #+#             */
/*   Updated: 2022/11/03 16:23:23 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "minitalk.h"
#include <signal.h>
#include <sys/wait.h>

static void	get_signal(int sig, siginfo_t *info, void *context)
{
	static int				n = 7;
	static unsigned char	c = 0;
	static pid_t			client_pid = 0;

	(void)context;
	if (client_pid == 0)
		client_pid = info -> si_pid;
	if (sig == SIGUSR2)
		c = c | (1 << n);
	n--;
	if (n < 0)
	{
		if (c == '\0')
		{
			kill(client_pid, SIGUSR1);
			client_pid = 0;
			n = 7;
			ft_printf("\n");
			return ;
		}
		ft_printf("%c", c);
		kill(client_pid, SIGUSR2);
		n = 7;
		c = 0;
	}
}

int	main(int argc, char **argv)
{
	struct sigaction	server;

	(void)argv;
	if (argc == 1)
	{
		system("clear");
		ft_printf("[SERVER PID] : %d\n", getpid());
		server.sa_sigaction = get_signal;
		server.sa_flags = SA_SIGINFO;
		sigaction(SIGUSR1, &server, NULL);
		sigaction(SIGUSR2, &server, NULL);
		while (1)
			pause();
	}
	return (0);
}
