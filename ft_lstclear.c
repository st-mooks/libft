/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 15:18:01 by mbadarin          #+#    #+#             */
/*   Updated: 2026/10/05 11:12:46 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (!lst || !del)
		return ;
	while ((*lst)->next)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
	ft_lstdelone(*lst, del);
}
/*
int	main(void)
{
	t_list	*lst1;
	t_list	*lst2;
	t_list	*lst3;

	lst1 = ft_init_node("original");
	lst2 = ft_init_node("second");
	lst3 = ft_init_node("newest");
	ft_lstadd_back(&lst1, lst2);
	ft_lstadd_back(&lst2, lst3);
	ft_lstclear(&lst1, ft_free_content);
	return (0);
}*/
