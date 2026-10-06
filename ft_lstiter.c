/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@students.42amman.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 12:07:10 by mbadarin          #+#    #+#             */
/*   Updated: 2026/10/06 21:57:30 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst->next)
	{
		f(lst->content);
		lst = lst->next;
	}
	f(lst->content);
}
/*
void	flip_case(void *content)
{
	char	*str;

	str = (char *)content;
	while (*str)
	{
		if (ft_isalpha(*str))
		{
			if (*str > 'a' && *str < 'z')
				*str -= 32;
		
			else
				*str += 32;
		}
		str++;
	}
}

int	main(void)
{
	t_list	*lst1;
	t_list	*lst2;
	char	*content;

	content = ft_strdup("1st Node");
	lst1 = ft_lstnew(content);
	content = ft_strdup("2nd_nOdE");
	lst2 = ft_lstnew(content);
	ft_lstadd_back(&lst1, lst2);
	printf("Before:\nlst1->content:%s\nlst2->content:%s"
			"\n", (char *)lst1->content, (char *)lst2->content);
	ft_lstiter(lst1, flip_case);
	printf("After:\nlst1->content:%s\nlst2->content:%s"
			"\n", (char *)lst1->content, (char *)lst2->content);
	ft_lstclear(&lst2, free);
	free(content);
	return (0);
}*/
