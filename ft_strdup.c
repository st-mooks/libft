/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 09:27:32 by mbadarin          #+#    #+#             */
/*   Updated: 2026/09/24 09:38:56 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*str_cpy;

	size = ft_strlen((char *)s);
	str_cpy = malloc(size);
	while (*s)
		*str_cpy++ = *s++;
	*str_cpy = '\0';
	return (str_cpy - size);
}
/*
int	main(void)
{
	char	*str = "Copy this string";
	char	*ft_str_cpy;
	char	*str_cpy;

	ft_str_cpy = ft_strdup(str);
	str_cpy = strdup(str);
	printf("ft_strdup:\nstr = %s\nmempry location = %p\nstr_cpy = %s\n"
			"memory location = %p\n", str, str, ft_str_cpy, ft_str_cpy);
	printf("ft_strdup:\nstr = %s\nmempry location = %p\nstr_cpy = %s\n"
			"memory location = %p\n", str, str, str_cpy, str_cpy);
	return (0);
}*/
