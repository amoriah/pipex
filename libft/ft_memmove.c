/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:27:22 by amoriah           #+#    #+#             */
/*   Updated: 2021/10/20 13:12:07 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s1;
	char	*s2;
	size_t	i;

	s1 = (char *)src;
	s2 = (char *)dst;
	i = 0;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s2 > s1)
	{
		while (len-- > 0)
			s2[len] = s1[len];
	}
	else
	{
		while (len > i)
		{
			s2[i] = s1[i];
			i++;
		}
	}
	return (dst);
}
