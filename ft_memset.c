/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neddison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 20:40:59 by neddison          #+#    #+#             */
/*   Updated: 2019/04/06 20:33:51 by neddison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *a, int b, size_t c)
{
	size_t		i;
	char		*str1;

	i = 0;
	str1 = a;
	while (i < c)
	{
		str1[i] = (unsigned char)b;
		i++;
	}
	return (a);
}
