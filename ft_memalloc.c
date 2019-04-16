/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neddison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:22:45 by neddison          #+#    #+#             */
/*   Updated: 2019/04/16 18:28:13 by neddison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	char	*mlc;
	size_t	i;

	mlc = malloc(sizeof(mlc) * size);
	if (mlc == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		mlc[i] = 0;
		i++;
	}
	return ((void *)mlc);
}
