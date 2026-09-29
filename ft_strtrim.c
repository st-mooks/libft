/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 12:13:39 by mbadarin          #+#    #+#             */
/*   Updated: 2026/09/29 09:16:35 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_in_set(const char *set, char c)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

static char	*trim_start(const char *s, const char *set)
{
	char	*trim_s;
	size_t	alloc_size;

	while (*s)
	{
		if (char_in_set(set, *s))
			s++;
		else
			break ;
	}
	alloc_size = ft_strlen(s) + 1;
	trim_s = malloc(alloc_size);
	ft_strlcpy(trim_s, s, alloc_size);
	return (trim_s);
}

static void	trim_end(char *s, const char *set)
{
	size_t	i;

	i = ft_strlen(s) - 1;
	while (s[i])
	{
		if (char_in_set(set, s[i]))
			s[i] = '\0';
		else
			break ;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim_s;

	trim_s = trim_start(s1, set);
	if (!trim_s)
		return (NULL);
	trim_end(trim_s, set);
	return (trim_s);
}
/*
int	main(void)
{
	const char	*s1 = "aaaAre you not entertainedc";
	const char	*set = "abc";
	char		*s2;

	s2 = ft_strtrim(s1, set);
	printf("s1=%s\nset=%s\ns2=%s\n", s1, set, s2);
	free(s2);
	return (0);
}*/
