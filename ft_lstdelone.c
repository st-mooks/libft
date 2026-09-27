/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 14:49:16 by mbadarin          #+#    #+#             */
/*   Updated: 2026/09/27 16:03:47 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	delete_content(void	*content)
{
	char	*content_c;

	content_c = (char *)content;
	*content_c = '\0';
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst -> content);
	free (lst);
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
	ft_lstadd_front(&lst1, lst2);
	ft_lstadd_front(&lst1, lst3);
	ft_lstdelone(lst2, delete_content);
	printf("pointer:%p content:%s", lst2, (char *)lst2 -> content);
	return (0);
}*/
