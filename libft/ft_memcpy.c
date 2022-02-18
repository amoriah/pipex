/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 11:33:46 by amoriah           #+#    #+#             */
/*   Updated: 2021/10/20 13:12:05 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	char			*p;
	char			*b;

	i = 0;
	p = (char *)src;
	b = (char *)dst;
	if (p == NULL && b == NULL)
		return (NULL);
	while (i < n)
	{
		b[i] = p[i];
		i++;
	}
	return (b);
}
