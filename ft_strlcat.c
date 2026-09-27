/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 19:20:18 by mbadarin          #+#    #+#             */
/*   Updated: 2026/09/24 13:28:57 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_size;

	dst_size = ft_strlen(dst);
	if (size > 0)
	{
		i = 0;
		while (i < size - dst_size - 1 && src[i])
		{
			dst[dst_size + i] = src[i];
			i++;
		}
		dst[i + dst_size] = '\0';
	}
	return (dst_size + ft_strlen(src));
}
/*
#include <bsd/string.h>
int	main(void)
{
	char	dst[] = "This is dst string";
	char	src[] = "This is src";
	size_t	return_value;
	char	dst2[] = "This is dst string";
	size_t	size;

	size = INT_MIN;
	printf("ft_strlcat:\nBefore:\ndst: %s\nsrc: %s\n", dst, src);
	return_value = ft_strlcat(dst, src, size);
	printf("After:\ndst: %s\nsrc: %s\nreturn: %zu\n", dst, src, return_value);
	printf("******\nstrlcat:\nBefore:\ndst: %s\nsrc: %s\n", dst2, src);
	return_value = strlcat(dst2, src, size);
	printf("After:\ndst: %s\nsrc: %s\nreturn: %zu\n", dst2, src, return_value);
	return (0);
}*/
