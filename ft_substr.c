/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 11:15:03 by mbadarin          #+#    #+#             */
/*   Updated: 2026/09/24 13:31:26 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;
	size_t	s_len;
	size_t	alloc_size;

	s_len = ft_strlen(s);
	if (start + len <= s_len)
		alloc_size = len + 1;
	else
		alloc_size = s_len - start + 1;
	sub_s = malloc(alloc_size);
	if (!sub_s)
		return (NULL);
	s += start;
	ft_strlcpy(sub_s, s, alloc_size);
	return (sub_s);
}
/*
int	main(int argc, char *argv[])
{
	const char		*s = "This is a string";
	char			*sub_s;
	unsigned int	start;
	size_t			len;

	if (argc != 3)
	{
		printf("INVALID INPUT.\nEXITING\n");
		exit(EXIT_FAILURE);
	}
	start = ft_atoi(argv[1]);
	len = ft_atoi(argv[2]);
	sub_s = ft_substr(s, start, len);
	printf("s=%s\nstart=%u, len=%zu\nsub_s=%s\n", s, start, len, sub_s);
	free(sub_s);
	return (0);
}*/
