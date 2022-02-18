/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 09:48:41 by amoriah           #+#    #+#             */
/*   Updated: 2021/10/20 13:12:28 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	lendst;
	size_t	lensrc;
	char	*p;

	i = 0;
	p = (char *)src;
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(p);
	if (dstsize <= lendst)
		return (dstsize + lensrc);
	while (p[i] && lendst + i + 1 < dstsize)
	{
		dst[lendst + i] = p[i];
		i++;
	}
	dst[lendst + i] = 0;
	return (lendst + lensrc);
}
