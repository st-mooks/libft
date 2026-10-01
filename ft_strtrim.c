/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 12:13:39 by mbadarin          #+#    #+#             */
/*   Updated: 2026/10/01 13:07:28 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//ft_strlen can be substituted with a static function here
//ft_strlcpy can be substituted with a static function here
//Total number of functions (including above): 3

static int	char_in_set(const char *set, char c)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*ptr;
	char	*trim_s;
	int		size;

	ptr = (char *)s1;
	while (char_in_set(set, *ptr))
		ptr++;
	start = ptr - s1;
	ptr = (char *)s1 + ft_strlen(s1) - 1;
	while (char_in_set(set, *ptr))
		ptr--;
	end = ptr - s1 + 1;
	size = end - start + 1;
	trim_s = malloc((size) * sizeof(char));
	if (!trim_s)
		return (NULL);
	ft_strlcpy(trim_s, s1 + start, size);
	return (trim_s);
}
/*
int	main(int argc, char *argv[])
{
	const char	*s1;
	const char	*set;
	char		*s2;

	if (argc != 3)
	{
		printf("INVALID INPUT.\nVALID INPUT NO.: 2. I.E.: CHAR *, CHAR *\n"
				"EXITING\n");
		exit(EXIT_FAILURE);
	}
	s1 = argv[1];
	set = argv[2];
	s2 = ft_strtrim(s1, set);
	printf("s1=\"%s\" set=\"%s\"\ns2=\"%s\"\n", s1, set, s2);
	free(s2);
	printf("s2 freed successfully\n");
	return (0);
}*/
