/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@students.42amman.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 12:50:32 by mbadarin          #+#    #+#             */
/*   Updated: 2026/10/05 12:08:51 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//ft_lstclear can be substituted with a static function here
//ft_lstdelone can be substituted with a static function here
//Total number of functions (including above): 3

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*node;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_content = f(lst->content);
	new_lst = ft_lstnew(new_content);
	if (!new_lst)
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		new_content = f(lst->content);
		node = ft_lstnew(new_content);
		if (!node)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, node);
		del(lst->content);
		lst = lst->next;
	}
	return (new_lst);
}
/*
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

void	ft_dummy(void *content)
{
	char	*str;

	str = (char *) content;
	str++;
}

int	main(void)
{
	t_list	*lst1;
	t_list	*lst2;
	t_list	*lst3;
	t_list	*lst_cpy;
	t_list	*ptr;
	int		i;

	lst1 = ft_init_node("fIrst Node");
	lst2 = ft_init_node("2nd_nODe");
	lst3 = ft_init_node("node no. 3");
	ft_lstadd_back(&lst1, lst2);
	ft_lstadd_back(&lst2, lst3);
	lst_cpy = ft_lstmap(lst1, ft_first_two, ft_dummy);
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
	ft_lstclear(&lst1, ft_free_content);
	ft_lstclear(&lst_cpy, ft_free_content);
	return (0);
}*/
