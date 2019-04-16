/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neddison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 16:37:28 by neddison          #+#    #+#             */
/*   Updated: 2019/04/16 21:16:41 by neddison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		count_words(char const *s, char c)
{
	size_t		i;
	size_t		count;

	i = 0;
	count = 0;
	while (s[i] == c && s[i] != '\0')
		i++;
	while (s[i])
	{
		while (s[i] != c && s[i] != '\0')
			i++;
		count++;
		while (s[i] == c && s[i] != '\0')
			i++;
	}
	return (count);
}

static size_t		last_ch(char const *s, char c, size_t i)
{
	size_t	j;

	j = i;
	while (s[j] != c && s[j] != '\0')
	{
		j++;
		if (s[j] == c || s[j] == '\0')
			return (j - i);
	}
	return (0);
}

char				**ft_strsplit(char const *s, char c)
{
	char			**tab;
	size_t			i;
	size_t			k;
	size_t			t;

	k = 0;
	i = 0;
	t = 0;
	if (!s)
		return (NULL);
	if (!(tab = (char **)ft_memalloc(sizeof(char *) * (count_words(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			if (!(tab[k] = ft_strsub(s, i, last_ch(s, c, i))))
			{
				while (k--)
				{
					free(*tab);
					free(tab);
				}
				return (NULL);
			}
			k++;
			i += last_ch(s, c, i) - 1;
		}
		i++;
	}
	return (tab);
}
