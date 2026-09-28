/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 11:46:08 by mbadarin          #+#    #+#             */
/*   Updated: 2026/09/28 20:04:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_init_node(void *str)
{
	t_list	*lst;
	char	*content;

	content = ft_strdup((const char *)str);
	if (!content)
		return (NULL);
	lst = ft_lstnew(content);
	return (lst);
}
