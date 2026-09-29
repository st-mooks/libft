/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 14:38:31 by mbadarin          #+#    #+#             */
/*   Updated: 2026/09/29 10:21:46 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	while ((*lst)->next)
		*lst = (*lst)->next;
	(*lst)->next = new;
}
/*
int	main(void)
{
	t_list	*lst1;
	t_list	*lst2;
	t_list	*lst3;

	lst1 = ft_init_node("origianl");
	printf("orignal element pointer=%p\n", lst1);
	lst2 = ft_init_node("second");
	printf("second element pointer=%p\n", lst2);
	lst3 = ft_init_node("newest");
	printf("newest element pointer-to become last-=%p\n", lst3);
	ft_lstadd_back(&lst1, lst2);
	ft_lstadd_back(&lst2, lst3);
	printf("Last element in linked list (aka. \"newewst\" element)=%p"
			" with content=%s"
			"", ft_lstlast(lst3), (char *)ft_lstlast(lst3) -> content);
	return (0);
}*/
