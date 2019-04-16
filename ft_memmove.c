/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neddison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 21:07:18 by neddison          #+#    #+#             */
/*   Updated: 2019/04/15 22:08:17 by neddison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;

	i = 0;
	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	if (a < b)
	{
		while (len--)
		{
			a[i] = b[i];
			i++;
		}
	}
	else
	{
		i = len;
		while (i > 0)
		{
			a[i - 1] = b[i - 1];
			i--;
		}
	}
	return (a);
}
