/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 13:03:41 by mbadarin          #+#    #+#             */
/*   Updated: 2026/10/01 11:17:47 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	char	pre_c;
	size_t	count;

	pre_c = c;
	count = 0;
	while (*s)
	{
		if (*s != c && pre_c == c)
			count++;
		pre_c = *s++;
	}
	return (count);
}

static void	fill_str(const char *origin, char *s, char c)
{
	while (*origin && *origin != c)
		*s++ = *origin++;
	*s = '\0';
}

static size_t	next(const char **s, char c)
{
	size_t	len;

	len = 0;
	while (**s && **s == c)
		*s += 1;
	while (*(*s + len) && *(*s + len) != c)
		len++;
	return (len);
}

void	free_all(char **split, int i)
{
	while (i >= 0)
		free(split[i--]);
	free(split);
}

char	**ft_split(const char *s, char c)
{
	int		word_count;
	char	**split_s;
	int		i;
	size_t	word_len;

	word_count = count_words(s, c);
	split_s = malloc((word_count + 1) * sizeof(char *));
	if (!split_s)
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		word_len = next(&s, c);
		split_s[i] = malloc((word_len + 1) * sizeof(char));
		if (!split_s[i])
		{
			free_all(split_s, i);
			return (NULL);
		}
		fill_str(s, split_s[i], c);
		s += word_len;
		i++;
	}
	split_s[i] = NULL;
	return (split_s);
}
/*
int	main(int argc, char *argv[])
{
	char	*s;
	char	c;
	char	**split_s;
	size_t	i;

	if (argc != 3)
	{
		printf("INVALID INPUTS. EXITING\n");
		exit(EXIT_FAILURE);
	}
	s = argv[1];
	c = argv[2][0];
	split_s = ft_split(s, c);
	if (split_s)
	{
		i = 0;
		while (split_s[i])
		{
			printf("split_s[%zu]=\'%s\'\n", i, split_s[i]);
			free(split_s[i]);
			printf("split_s[%zu] freed successfully!\n", i);
			i++;
		}
		printf("split_s[%zu]==NULL: %d\n", i, split_s[i] == NULL);
		free(split_s[i]);
		printf("split_s[%zu] freed successfully!\n", i);
		free(split_s);
		printf("split_s freed successfully!\n");
	}
	else
		printf("Encountered error allocating memory. Exiting\n");
	return (0);
}*/
