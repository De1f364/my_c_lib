/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neddison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:22:52 by neddison          #+#    #+#             */
/*   Updated: 2019/04/15 22:08:39 by neddison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	unsigned char	sym;
	size_t			i;

	a = (unsigned char *)s;
	sym = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (a[i] == sym)
		{
			b = &a[i];
			return (b);
		}
		i++;
	}
	return (NULL);
}
