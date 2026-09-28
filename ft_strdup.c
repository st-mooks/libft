/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 09:27:32 by mbadarin          #+#    #+#             */
/*   Updated: 2026/09/28 19:33:13 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*str_cpy;

	size = ft_strlen(s) + 1;
	str_cpy = malloc(size);
	if (!str_cpy)
		return (NULL);
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
	free(ft_str_cpy);
	free(str_cpy);
	return (0);
}*/
