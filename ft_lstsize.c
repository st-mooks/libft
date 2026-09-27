/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 14:15:32 by mbadarin          #+#    #+#             */
/*   Updated: 2026/09/27 14:24:59 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	size;

	size = 1;
	while (lst->next)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
/*
int	main(void)
{
	t_list	*lst1;
	t_list	*lst2;
	t_list	*lst3;

	lst1 = ft_lstnew("original");
	lst2 = ft_lstnew("second");
	lst3 = ft_lstnew("newest)");
	ft_lstadd_front(&lst1, lst2);
	ft_lstadd_front(&lst1, lst3);
	printf("Linked list size (ls1) = %u (which is the same as (ls3) = %d)"
			"\n", ft_lstsize(lst1), ft_lstsize(lst3));
	return (0);
}*/
