/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 09:48:13 by mbadarin          #+#    #+#             */
/*   Updated: 2026/09/23 10:11:20 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
int	main(int argc, char *argv[])
{
	char const	*s1;
	char const	*s2;
	size_t		n;

	if (argc != 4)
	{
		printf("INVALID/EMPTY INPUT. EXITING\n");
		exit(EXIT_FAILURE);
	}
	s1 = argv[1];
	s2 = argv[2];
	n = (size_t)atoi(argv[3]);
	printf("ft_strncmp:\ns1 = %s\ns2 = %s\nn = %zu\nreturn = "
			"%d", s1, s2, n, ft_strncmp(s1, s2, n));
	printf("\n****\nstrncmp:\ns1 = %s\ns2 = %s\nn = %zu\nreturn = "
			"%d", s1, s2, n, strncmp(s1, s2, n));
	return (0);
}*/
