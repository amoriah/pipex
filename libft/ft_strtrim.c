/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:38:39 by amoriah           #+#    #+#             */
/*   Updated: 2021/10/20 13:12:43 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	char	*s_1;
	size_t	end;
	size_t	len;

	start = 0;
	if (!s1 || !set || !*s1)
		return (ft_calloc(1, sizeof(char)));
	s_1 = (char *)s1;
	end = ft_strlen(s_1) - 1;
	while (*s_1 && ft_strchr(set, *s_1))
	{
		s_1++;
		start++;
	}
	if (!*s_1)
		return (ft_calloc(1, 1));
	s_1 = (char *)s1 + ft_strlen((char *)s1) - 1;
	while (ft_strrchr(set, *s_1))
	{
		s_1--;
		end--;
	}
	len = end - start + 1;
	return (ft_substr(s1, start, len));
}
