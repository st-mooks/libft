/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 09:16:57 by mbadarin          #+#    #+#             */
/*   Updated: 2026/09/23 09:46:30 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*s_cpy;

	c = (char)c;
	s_cpy = (char *)s;
	i = ft_strlen(s_cpy);
	if (c == '\0')
		return (s_cpy + i);
	while (i > 0)
	{
		if (s_cpy[i - 1] == c)
			return (s_cpy);
		i++;
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
	printf("ft_strrchr:\ns = %s c = %c\nreturn = %p\n", s, c, ft_strrchr(s, c));
	printf("****\nstrrchr:\ns = %s c = %c\nreturn = %p\n", s, c, strrchr(s, c));
	return (0);
}*/
