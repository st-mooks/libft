/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 13:24:39 by mbadarin          #+#    #+#             */
/*   Updated: 2026/09/27 13:49:34 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_list;

	new_list = malloc(sizeof(t_list));
	new_list->content = content;
	new_list->next = NULL;
	return (new_list);
}
/*
int	main(void)
{
	t_list	*linked_list;

	linked_list = ft_lstnew("This is a the content of the first element");
	printf("linked_list content=%s\nlinked_lest next==NULL: %d"
			"", (char *)linked_list->content, linked_list->next == NULL);
}*/
