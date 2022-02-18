/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 22:51:06 by amoriah           #+#    #+#             */
/*   Updated: 2022/01/25 19:58:11 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	parent_process(int *fd, char **av, char **env)
{
	int	fd_stdout;

	fd_stdout = open(av[4], O_WRONLY | O_CREAT | O_TRUNC, 0777);
	if (fd_stdout == -1)
		ft_perror(ERR_OPEN);
	dup2(fd[0], 0);
	dup2(fd_stdout, 1);
	close(fd[1]);
	take_cmd(av[3], env);
}

void	child_process(int *fd, char **av, char **env)
{
	int	fd_f1;

	if (access(av[1], F_OK) == -1)
		ft_perror(ERR_F_OK);
	if (access(av[1], R_OK) == -1)
		ft_perror(ERR_RD);
	fd_f1 = open(av[1], O_RDONLY);
	if (fd_f1 == -1)
		ft_perror(ERR_OPEN);
	if (dup2(fd_f1, 0) == -1)
		ft_perror(ERR_DUP2);
	close(fd[0]);
	if (dup2(fd[1], 1) == -1)
		ft_perror(ERR_DUP2);
	close(fd[1]);
	take_cmd(av[2], env);
}

int	main(int ac, char **av, char **env)
{
	int		fd[2];
	pid_t	id;

	if (ac == 5)
	{
		if (pipe(fd) == -1)
			ft_perror(ERR_PIPE);
		id = fork();
		if (id == -1)
			ft_perror(ERR_FORK);
		if (id == 0)
			child_process(fd, av, env);
		waitpid(id, 0, 0);
		if (id > 0)
			parent_process(fd, av, env);
		close(fd[0]);
		close(fd[1]);
		return (0);
	}
	ft_perror(ERR_AC);
}
