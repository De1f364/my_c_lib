/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neddison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 18:42:51 by neddison          #+#    #+#             */
/*   Updated: 2019/04/15 18:42:51 by neddison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*tmp;

	tmp = (t_list *)ft_memalloc(sizeof(t_list));
	if (tmp == NULL)
		return (NULL);
	tmp->content = (void *)ft_memalloc(content_size);
	if (tmp->content == NULL)
		return (NULL);
	if (content)
	{
		tmp->content = ft_memcpy(tmp->content, content, content_size);
		tmp->content_size = content_size;
	}
	else
	{
		tmp->content = NULL;
		tmp->content_size = 0;
	}
	tmp->next = NULL;
	return (tmp);
}
