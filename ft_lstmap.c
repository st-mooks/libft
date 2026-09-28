/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@students.42amman.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 12:50:32 by mbadarin          #+#    #+#             */
/*   Updated: 2026/09/28 14:47:52 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*temp_node;
	void	*new_content;

	new_content = f(lst->content);
	new_lst = ft_lstnew(new_content);
	if (!new_lst)
		return (NULL);
	lst = lst->next;
	while (lst->next)
	{
		new_content = f(lst->content);
		temp_node = ft_lstnew(new_content);
		ft_lstadd_back(&new_lst, temp_node);
		lst = lst->next;
	}
	if (lst)
	{
		new_content = f(lst->content);
		temp_node = ft_lstnew(new_content);
		ft_lstadd_back(&new_lst, temp_node);
	}
	ft_lstiter(new_lst, del);
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
	t_list	*lst_cpy;

	lst1 = ft_init_node("fIrst Node");
	lst2 = ft_init_node("2nd_nODe");
	ft_lstadd_back(&lst1, lst2);
	lst_cpy = ft_lstmap(lst1, ft_first_two, ft_dummy);
	printf("original list location:%p\nfirst node content:%s\nnext node:%p"
			"\n", lst1, (char *)lst1->content,lst1->next);
	printf("copied list location:%p\nfirst node content:%s\nnext node:%p"
			"\n", lst_cpy, (char *)lst_cpy->content, lst_cpy->next);
	ft_lstclear(&lst1, ft_free_content);
	ft_lstclear(&lst_cpy, ft_free_content);
	return (0);
}*/
