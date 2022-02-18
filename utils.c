/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 22:51:16 by amoriah           #+#    #+#             */
/*   Updated: 2022/01/25 19:58:33 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	ft_perror(char *str)
{
	perror(str);
	exit(EXIT_FAILURE);
}

void	free_arr(char **arr)
{
	int	i;

	i = 0;
	while (*(arr + i))
		i++;
	while (i--)
	{
		free (arr[i]);
	}
	free (arr);
}

char	*look_for_cmd(char **arr, char *cmd)
{
	int		i;
	char	*pice_of_path;
	char	*path;

	i = 0;
	while (arr[i])
	{
		pice_of_path = ft_strjoin(arr[i], "/");
		path = ft_strjoin(pice_of_path, cmd);
		free(pice_of_path);
		if (access(path, F_OK) == 0)
			return (path);
		free(path);
		i++;
	}
	return (NULL);
}

char	*get_path(char *cmd, char **env)
{
	int		i;
	char	*path;
	char	**all_path;

	i = 0;
	while (!(ft_strnstr(env[i], "PATH=", 5)))
	{
		i++;
		if (env[i] == NULL)
		{
			ft_perror(ERR_PATH);
			exit (-1);
		}
	}	
	all_path = ft_split(env[i] + 5, ':');
	i = 0;
	path = look_for_cmd(all_path, cmd);
	if (path == NULL)
		return (NULL);
	free_arr(all_path);
	return (path);
}

void	take_cmd(char *str, char **env)
{
	char	**arr;
	char	*path;

	arr = ft_split(str, ' ');
	path = get_path(arr[0], env);
	if (execve(path, arr, env) == -1)
		ft_perror(ERR_EXE);
}
