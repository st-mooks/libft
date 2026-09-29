/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 14:49:16 by mbadarin          #+#    #+#             */
/*   Updated: 2026/09/29 09:12:18 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free (lst);
}
/*
void	free_content(void *content)
{
	free(content);
}
int	main(void)
{
	t_list	*lst1;
	
	lst1 = ft_init_node("original");
	ft_lstdelone(lst1, free_content);
	return (0);
}*/
