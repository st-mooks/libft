/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@students.42amman.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 12:07:10 by mbadarin          #+#    #+#             */
/*   Updated: 2026/09/29 12:21:24 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst->next)
	{
		f(lst->content);
		lst = lst->next;
	}
	f(lst->content);
}
/*
static void	flip_case(void *content)
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

	lst1 = ft_init_node("1st Node");
	lst2 = ft_init_node("2nd_nOdE");
	ft_lstadd_back(&lst1, lst2);
	printf("Before:\nlst1->content:%s\nlst2->content:%s"
			"\n", (char *)lst1->content, (char *)lst2->content);
	ft_lstiter(lst1, flip_case);
	printf("After:\nlst1->content:%s\nlst2->content:%s"
			"\n", (char *)lst1->content, (char *)lst2->content);
	ft_lstclear(&lst2, ft_free_content);
	return (0);
}*/
