/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neddison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:25:30 by neddison          #+#    #+#             */
/*   Updated: 2019/04/16 18:29:53 by neddison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*tab;
	size_t	i;

	tab = (char *)malloc(sizeof(char) * (size + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i <= size)
	{
		tab[i] = '\0';
		i++;
	}
	return (tab);
}
