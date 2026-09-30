/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 12:13:39 by mbadarin          #+#    #+#             */
/*   Updated: 2026/09/30 12:31:25 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//ft_strlen can be substituted with a static function here
//Total number of functions (including above): 5

static int	char_in_set(const char *set, char c)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

static char	*trim_start(const char *s, const char *c)
{
	char	*trim_s;
	int		i;

	while (char_in_set(c, *s))
		s++;
	i = 0;
	while (s[i])
	{
		i++;
	}
	trim_s = malloc((i + 1) * sizeof(char));
	if (!trim_s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		trim_s[i] = s[i];
		i++;
	}
	trim_s[i] = '\0';
	return (trim_s);
}

static void	trim_end(char *s, const char *set)
{
	size_t	i;

	i = ft_strlen(s);
	while (i > 0)
	{
		if (char_in_set(set, s[i - 1]))
		{
			s[i - 1] = '\0';
			i--;
		}
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
