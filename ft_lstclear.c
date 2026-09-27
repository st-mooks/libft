/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 15:18:01 by mbadarin          #+#    #+#             */
/*   Updated: 2026/09/27 16:30:13 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	delete_content(void	*content)
{
	char	*content_c;

	content_c = (void *)content;
	*content_c = '\0';
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;
	void	*content;

	while ((*lst) -> next)
	{
		next = (*lst) -> next;
		printf("delete:%p***\n", next);
		content = (*lst) -> content;
		delete_content(content);
		free(*lst);
		*lst = next;
	}
	content = (*lst) -> content;
	//ft_lstdelone(*lst, del(content));
}

int	main(void)
{
	t_list	*lst1;
	t_list	*lst2;
	t_list	*lst3;

	lst1 = ft_lstnew("original");
	printf("lst1:%p\n", lst1);
	lst2 = ft_lstnew("second");
	printf("lst2:%p\n", lst2);
	lst3 = ft_lstnew("newest");
	printf("lst3:%p\n", lst3);
	ft_lstadd_front(&lst1, lst2);
	ft_lstadd_front(&lst2, lst3);
	ft_lstclear(&lst2, delete_content);
	printf("lst1:%p next:%p content:%s\n", lst1, lst1 -> next, lst1 -> content);
	printf("lst2:%p next:%p content:%s\n", lst2, lst2 -> next, lst2 -> content);
	printf("lst3:%p next:%p content:%s\n", lst3, lst3 -> next, lst3 -> content);
	return (0);
}
