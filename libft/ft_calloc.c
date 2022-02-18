/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:52:35 by amoriah           #+#    #+#             */
/*   Updated: 2021/10/20 13:11:44 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char			*p;
	unsigned int	mult;
	unsigned int	i;

	mult = count * size;
	p = malloc(mult);
	if (!p)
		return (NULL);
	i = 0;
	while (mult)
	{
		p[i] = 0;
		i++;
		mult--;
	}
	return ((void *)p);
}
