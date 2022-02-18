/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 22:51:11 by amoriah           #+#    #+#             */
/*   Updated: 2022/01/24 23:53:00 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# define ERR_PIPE	"Error: problem with pipe"
# define ERR_DUP2	"Error: problem with dup2"
# define ERR_FORK	"Error: problem with fork"
# define ERR_RD		"Error: permition denied"
# define ERR_F_OK	"Error: not such file of directory"
# define ERR_OPEN	"Error: failed to open file"
# define ERR_EXE	"Error: problem with execve"
# define ERR_EXE	"Error: problem with execve"
# define ERR_AC		"Error: ac != 5"
# define ERR_PATH	"Error: WTF!? Did you kill the PATH?"

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/wait.h>
# include "libft/libft.h"

void	ft_perror(char *str);
char	*look_for_cmd(char **arr, char *cmd);
char	*get_path(char *cmd, char **env);
void	take_cmd(char *str, char **env);

#endif