/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 11:18:39 by amoriah           #+#    #+#             */
/*   Updated: 2021/10/20 13:12:02 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*b;

	i = 0;
	p = (unsigned char *)s1;
	b = (unsigned char *)s2;
	if (n == 0 || p == b)
		return (0);
	while (++i < n && *p == *b)
	{
		p++;
		b++;
	}
	return ((int)*p - (int)*b);
}
