/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@students.42amman.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 12:50:32 by mbadarin          #+#    #+#             */
/*   Updated: 2026/10/06 22:02:01 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//ft_lstclear can be substituted with a static function here
//ft_lstdelone can be substituted with a static function here
//ft_lstnew can be substituted with a static function here
//Total number of functions (including above): 5

static int	fill_lst(t_list **lst, void *content, void (*del)(void *))
{
	t_list	*node;

	node = ft_lstnew(content);
	if (!node)
	{
		del(content);
		ft_lstclear(lst, del);
		return (0);
	}
	ft_lstadd_back(lst, node);
	return (1);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_content = f(lst->content);
	new_lst = ft_lstnew(new_content);
	if (!new_lst)
	{
		del(new_content);
		return (NULL);
	}
	lst = lst->next;
	while (lst)
	{
		new_content = f(lst->content);
		if (!fill_lst(&new_lst, new_content, del))
			return (NULL);
		lst = lst->next;
	}
	return (new_lst);
}

void	*ft_first_two(void *content)
{
	char	*str;
	int		i;

	str = malloc(3 * sizeof(char));
	i = 0;
	while (i < 2)
	{
		str[i] = ((char *)content)[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	t_list	*lst1;
	t_list	*lst2;
	t_list	*lst3;
	t_list	*lst_cpy;
	t_list	*ptr;
	int		i;
	char	*content;

	content = ft_strdup("First");
	lst1 = ft_lstnew(content);
	content = ft_strdup("Second");
	lst2 = ft_lstnew(content);
	content = ft_strdup("Third");
	lst3 = ft_lstnew(content);
	ft_lstadd_back(&lst1, lst2);
	ft_lstadd_back(&lst2, lst3);
	lst_cpy = ft_lstmap(lst1, ft_first_two, free);
	i = 0;
	ptr = lst1;
    while (ptr)
	{
		printf("Original list node no. %d content:\"%s\", next:%p, "
				"location:%p\n", i++, (char *)ptr->content, ptr->next, ptr);
		ptr = ptr->next;
	}
	i = 0;
	ptr = lst_cpy;
	while (ptr)
	{
		printf("New list node no. %d content:\"%s\", next:%p, "
				"location:%p\n", i++, (char *)ptr->content, ptr->next, ptr);
		ptr = ptr->next;
	}
	printf("lst_cpy size:%u", ft_lstsize(lst_cpy));
	ft_lstclear(&lst1, free);
	ft_lstclear(&lst_cpy, free);
	return (0);
}*/
