/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neddison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 18:31:50 by neddison          #+#    #+#             */
/*   Updated: 2019/04/16 18:44:34 by neddison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*tmp;

	if (!(*alst || alst || del))
		return ;
	tmp = *alst;
	while (tmp)
	{
		*alst = (*alst)->next;
		ft_lstdelone(&tmp, del);
		tmp = *alst;
	}
	*alst = NULL;
}
