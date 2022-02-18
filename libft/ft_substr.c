/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:37:10 by amoriah           #+#    #+#             */
/*   Updated: 2021/10/20 17:59:11 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*subs;
	char	*p;
	size_t	len_sub;

	i = 0;
	p = (char *)s;
	if (!p)
		return (NULL);
	len_sub = ft_strlen(p) - start;
	if (len_sub > len)
		len_sub = len;
	if (start >= ft_strlen(p))
	{
		subs = ft_calloc(1, sizeof(char));
		return (subs);
	}
	subs = ft_calloc((len_sub + 1), sizeof(char));
	if (!subs)
		return (NULL);
	while (len_sub--)
		subs[i++] = p[start++];
	return (subs);
}
