/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:31:27 by amoriah           #+#    #+#             */
/*   Updated: 2021/10/20 13:12:30 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	char	*p;

	p = (char *)src;
	i = 0;
	if (dstsize >= 1)
	{
		while (i != (dstsize - 1) && p[i])
		{
			dst[i] = p[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(p));
}
