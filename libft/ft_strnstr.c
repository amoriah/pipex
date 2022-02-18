/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 12:16:52 by amoriah           #+#    #+#             */
/*   Updated: 2021/10/20 13:12:38 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*h;
	char	*n;

	i = 0;
	j = 0;
	h = (char *)haystack;
	n = (char *)needle;
	if (n[0] == '\0')
		return (h);
	while (i < len && h[i])
	{
		if (h[i] == n[0])
		{
			while (n[j] && h[i + j] == n[j] && i + j < len)
			{
				if (n[j + 1] == '\0')
					return ((char *)&h[i]);
				j++;
			}
		}
		i++;
	}
	return (0);
}
