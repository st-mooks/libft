/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 09:16:57 by mbadarin          #+#    #+#             */
/*   Updated: 2026/09/24 13:27:40 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	c = (char)c;
	if (c == '\0')
		return ((char *)s + ft_strlen(s));
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
/*
int	main(int argc, char *argv[])
{
	char	*s;
	int		c;

	if (argc != 3)
	{
		printf("INVALID/EMPTY INPUT. EXITING\n");
		exit(EXIT_FAILURE);
	}
	s = argv[1];
	c = atoi(argv[2]);
	printf("ft_strchr:\ns = %s c = %c\nreturn = %p\n", s, c, ft_strchr(s, c));
	printf("****\nstrchr:\ns = %s c = %c\nreturn = %p\n", s, c, strchr(s, c));
	return (0);
}*/
