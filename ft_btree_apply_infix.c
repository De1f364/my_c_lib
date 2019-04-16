/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_apply_infix.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neddison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 19:37:57 by neddison          #+#    #+#             */
/*   Updated: 2019/04/16 19:38:21 by neddison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root->left)
		btree_apply_infix(root->left, applyf);
	applyf(root->item);
	if (root->right)
		btree_apply_infix(root->right, applyf);
}
