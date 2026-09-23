/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 15:02:29 by mbadarin          #+#    #+#             */
/*   Updated: 2026/09/22 17:02:50 by mbadarin         ###   ########.fr       */
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
	char	str[] = "Copy this text";
	
	printf("Before:\ndest = %s\nsrc = %s\n", str + 6, str);
	ft_memcpy(str + 6, str, ft_strlen(str) + 1);
	printf("After:\ndest = %s\nsrc = %s\n", str + 6, str);
}*/
