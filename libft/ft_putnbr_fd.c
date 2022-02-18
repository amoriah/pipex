/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:20:12 by amoriah           #+#    #+#             */
/*   Updated: 2021/10/20 13:12:14 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_recurnbr_fd(int nbr, int fd)
{
	char	c;

	if (nbr == 0)
		return ;
	else
	{
		c = nbr % 10;
		if (c < 0)
			c = -c;
		c = c + '0';
		nbr = nbr / 10;
		ft_recurnbr_fd(nbr, fd);
		write(fd, &c, 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		write (fd, "-", 1);
	if (n == 0)
		write(fd, "0", 1);
	ft_recurnbr_fd(n, fd);
}
