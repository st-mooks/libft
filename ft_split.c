/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 13:03:41 by mbadarin          #+#    #+#             */
/*   Updated: 2026/09/24 15:34:32 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(char const *s, char c)
{
	char	pre_c;
	size_t	count;

	pre_c = c;
	count = 0;
	while (*s)
	{
		if (*s != c && pre_c == c)
			count++;
		pre_c = *s;
		s++;
	}
	return (count);
}

char	*next_word(char const *s, char c)
{
	long	word_len;
	char	*word;
	size_t	i;

	word_len = ft_strchr(s, c) - s;
	if (word_len < 0)
		word_len = ft_strlen(s);
	word = malloc(word_len * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (i < word_len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	*make_set(char c)
{
	char	*set;

	set = malloc(2 * sizeof(char));
	set[0] = c;
	set[1] = '\0';
	return (set);
}

char	**ft_split(char const *s, char c)
{
	char	*set;
	size_t	word_count;
	char	*s_cpy;
	char	**split_s;
	size_t	i;

	set = make_set(c);
	word_count = count_words(s, c);
	s_cpy = (char *)s;
	split_s = malloc((word_count + 1) * sizeof(char *));
	if (!split_s)
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		s_cpy = ft_strtrim(s_cpy, set);
		split_s[i] = next_word(s_cpy, c);
		if (!split_s[i])
			return (NULL);
		s_cpy += ft_strlen((char *)split_s[i]);
		i++;
	}
	split_s[i] = NULL;
	free(set);
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
		printf("INVALID INPUTS.\nEXITING\n");
		exit(EXIT_FAILURE);
	}
	s = argv[1];
	c = argv[2][0];
	split_s = ft_split(s, c);
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
	return (0);
}*/
