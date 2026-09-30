/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 15:02:29 by mbadarin          #+#    #+#             */
/*   Updated: 2026/09/29 14:13:58 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dest_cpy;
	const char	*src_cpy;

	dest_cpy = dest;
	src_cpy = src;
	i = 0;
	while (i < n)
	{
		dest_cpy[i] = src_cpy[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "Copy from this";
	char	dest[25] = "Over this";
	
	printf("Before:\ndest = %s (at: %p)\nsrc = %s (at: %p)\n"
		"", dest, dest, src, src);
	ft_memcpy(dest, src, 8);
	printf("After:\ndest = %s (at: %p)\nsrc = %s (at: %p)\n"
		"", dest, dest, src, src);
}*/
