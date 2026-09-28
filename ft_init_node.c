/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@students.42amman.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 11:46:08 by mbadarin          #+#    #+#             */
/*   Updated: 2026/09/28 12:58:17 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_init_node(void *str)
{
	t_list	*lst;
	char	*content;
	size_t	size;

	size = ft_strlen((const char *)str) + 1;
	content = malloc(size * sizeof(char));
	if (!content)
		return (NULL);
	strlcpy(content, (char *)str, size);
	lst = ft_lstnew(content);
	return (lst);
}
