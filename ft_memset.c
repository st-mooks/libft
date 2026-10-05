/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 11:42:44 by mbadarin          #+#    #+#             */
/*   Updated: 2026/10/05 11:43:21 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s_copy;
	size_t			i;

	if (!s)
		return (NULL);
	s_copy = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		s_copy[i] = c;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	void	*s;
	int		c;
	size_t	t;
	size_t	i;

	i = 20;
	s = malloc(20);
	c = 'a';
	while (i > 0)
	{
		((char *)s)[i - 1] = c;
		i--;
	}
	printf("Before:\n");
	while (i < 20)
		printf("%c", ((char *)s)[i++]);
	c = 'b';
	t = 10;
	ft_memset(s, c, t);
	printf("\nAfter:\n");
	i = 0;
	while (i < 20)
		printf("%c", ((char *)s)[i++]);
	return (0);
}*/
