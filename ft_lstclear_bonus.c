/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmerlene <gmerlene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:33:12 by gmerlene          #+#    #+#             */
/*   Updated: 2021/10/06 19:35:38 by gmerlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	clear_node(t_list *node, void (*del)(void *))
{
	if (node->next)
		clear_node(node->next, del);
	del(node->content);
	free(node);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (lst && *lst)
	{
		clear_node(*lst, del);
		*lst = NULL;
	}
}
