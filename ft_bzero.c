/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 12:34:07 by mbadarin          #+#    #+#             */
/*   Updated: 2026/09/22 17:03:00 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
	return (s);
}
/*
int	main(void)
{
	void	*s;
	int		i;

	s = malloc(20);
	printf("Before:\n");
	i = 0;
	while (i < 20)
	{
		((char *)s)[i] = 1;
		printf("%d", ((char *)s)[i++]);
	}
	ft_bzero(s, 10);
	printf("\nAfter:\n");
	i = 0;
	while (i < 20)
		printf("%d", ((char *)s)[i++]);
	return (0);
}*/
