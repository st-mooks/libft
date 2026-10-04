/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 14:38:21 by mbadarin          #+#    #+#             */
/*   Updated: 2026/10/03 12:19:02 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

//ft_memcpy can be substituted with  a static function here
//Total number of functions (including above): 2

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if ((uintptr_t)dest > (uintptr_t)src)
	{
		i = 0;
		while (i < n)
		{
			*((char *)dest + n - i - 1) = *((char *)src + n - i - 1);
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
	char	*str;
	char	*str2;

	str = malloc(sizeof("This text will overlap"));
	str2 = malloc(sizeof("This text will overlap"));
	str = ft_strdup("This text will overlap");
	printf("After:\ndest:%s\nsrc:%s\n", str2, str);
	ft_memmove(str2, str, ft_strlen(str));
	printf("After:\ndest:%s\nsrc:%s\n", str2, str);
	return (0);
}*/
