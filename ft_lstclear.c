/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 15:18:01 by mbadarin          #+#    #+#             */
/*   Updated: 2026/10/06 21:50:43 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
}
/*
int	main(void)
{
	t_list	*lst1;
	t_list	*lst2;
	t_list	*lst3;

	lst1 = ft_lstnew("original");
	lst2 = ft_lstnew("second");
	lst3 = ft_lstnew("newest");
	ft_lstadd_back(&lst1, lst2);
	ft_lstadd_back(&lst2, lst3);
	ft_lstclear(&lst1, free);
	return (0);
}*/
