/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 14:38:21 by mbadarin          #+#    #+#             */
/*   Updated: 2026/10/05 11:39:09 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

//ft_memcpy can be substituted with  a static function here
//Total number of functions (including above): 2

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	size_t	offset;

	if (!dest || !src)
		return (NULL);
	if ((uintptr_t)dest > (uintptr_t)src)
	{
		i = 0;
		while (i < n)
		{
			offset = n - i - 1;
			*((char *)dest + offset) = *((char *)src + offset);
			i++;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
/*
int	main(void)
{
	char	*dest;
	char	*src;
	char	*dest_return;

	src = ft_strdup("Copy this text");
	dest = src + 4;
	printf("After:\ndest:\"%s\"\nsrc:\"%s\"\n", dest, src);
	dest_return = ft_memmove(dest, src, ft_strlen(src) - 4);
	printf("After:\ndest:\"%s\"\nsrc:\"%s\"\n", dest, src);
	printf("dest_return:\"%s\"\n", dest_return);
	free(src);
	return (0);
}*/
