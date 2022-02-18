/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 23:12:54 by amoriah           #+#    #+#             */
/*   Updated: 2021/10/20 13:12:35 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*p;
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = (char *)s;
	p = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!p)
		return (NULL);
	while (str[i])
	{
		p[i] = f(i, str[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}
