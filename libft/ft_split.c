/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 13:36:19 by amoriah           #+#    #+#             */
/*   Updated: 2021/10/20 13:12:18 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	wc;
	int	i;

	wc = 0;
	i = 0;
	while (*s)
	{
		if (*s == c)
			i = 0;
		if (i == 0)
		{
			if (*s != c)
			{
				i = 1;
				wc++;
			}
		}
		s++;
	}
	return (wc);
}

static void	free_memory(char **arr, int wc)
{
	while (wc--)
	{
		free (arr[wc - 1]);
	}
	free (arr);
}

char	**f_body(char **arr, const char *s, char c, int wc)
{
	int	i;
	int	w_len;
	int	arr_count;

	i = 0;
	arr_count = 0;
	while (arr_count < wc)
	{
		while (s[i] == c)
			i++;
		w_len = 0;
		while (s[i + w_len] != c && s[i + w_len])
			w_len++;
		arr[arr_count] = ft_substr(s, i, w_len);
		if (!arr[arr_count])
		{
			free_memory(arr, wc);
			return (NULL);
		}
		i = i + w_len;
		arr_count++;
	}
	arr[arr_count] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		wc;

	if (!s)
		return (NULL);
	wc = word_count(s, c);
	arr = (char **)malloc((wc + 1) * sizeof (char const *));
	if (!arr)
		return (NULL);
	return (f_body(arr, s, c, wc));
}
