/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 14:38:21 by mbadarin          #+#    #+#             */
/*   Updated: 2026/09/23 11:12:10 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	long		start;
	long		end;
	char		*dest_cpy;
	const char	*src_cpy;

	start = (long)(dest - src);
	if (start > 0)
	{
		end = (long)(start + n);
		dest_cpy = dest;
		src_cpy = (const char *)src;
		while (end - start > 0)
		{
			*(dest_cpy + end - 1) = *(src_cpy + end - start - 1);
			end--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
/*
int	main(void)
{
	char	str[] = "Hello";

	printf("Before:\ndest:%s\nsrc:%s\n", str, str + 5);
	ft_memmove(str, str + 5, 4);
	printf("After:\ndest:%s\nsrc:%s\n", str, str + 5);
	return (0);
}*/
