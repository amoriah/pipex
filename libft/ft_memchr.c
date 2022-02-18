/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 10:44:03 by amoriah           #+#    #+#             */
/*   Updated: 2021/10/20 13:12:01 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	chr;

	i = 0;
	p = (unsigned char *)s;
	chr = (unsigned char)c;
	if (n == 0)
		return (NULL);
	while (i < (n - 1) && p[i] != chr)
		i++;
	if (p[i] == chr)
		return (&p[i]);
	else
		return (NULL);
}
