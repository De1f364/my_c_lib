/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neddison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 19:32:29 by neddison          #+#    #+#             */
/*   Updated: 2019/04/16 19:33:01 by neddison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_btree		*btree_create_node(void *item)
{
	t_btree	*wtf;

	wtf = malloc(sizeof(t_btree));
	wtf->item = item;
	wtf->left = NULL;
	wtf->right = NULL;
	return (wtf);
}
