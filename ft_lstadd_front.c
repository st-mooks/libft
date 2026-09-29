/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 13:50:20 by mbadarin          #+#    #+#             */
/*   Updated: 2026/09/29 10:24:12 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list	*lst;
	t_list	*new;

	lst = ft_init_node("original");
	new = ft_init_node("new");
	printf("BEFORE:\nhead pointer=%p\nnew pointer=%p\n", lst, new);
	ft_lstadd_front(&lst, new);
	printf ("AFTER:\nhead pointer=%p\nnew.next=%p\n", lst, new->next);
	return (0);
}*/
