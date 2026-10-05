/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 09:27:32 by mbadarin          #+#    #+#             */
/*   Updated: 2026/10/05 12:17:45 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//ft_strlen can be substituted with a static function here
//Total number of functions (including above): 2

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*str_cpy;

	if (!s)
		return (NULL);
	size = ft_strlen(s) + 1;
	str_cpy = malloc(size * sizeof(char));
	if (!str_cpy)
		return (NULL);
	while (*s)
		*str_cpy++ = *s++;
	*str_cpy++ = '\0';
	return (str_cpy - size);
}
/*
int	main(void)
{
	char	*str = "Copy this string";
	char	*ft_str_cpy;
	char	*str_cpy;

	ft_str_cpy = ft_strdup(str);
	printf("ft_strdup:\nstr = %s\nmemory location = %p\nstr_cpy = %s\n"
			"memory location = %p\n", str, str, ft_str_cpy, ft_str_cpy);
	str_cpy = strdup(str);
	printf("ft_strdup:\nstr = %s\nmemory location = %p\nstr_cpy = %s\n"
			"memory location = %p\n", str, str, str_cpy, str_cpy);
	free(ft_str_cpy);
	free(str_cpy);
	return (0);
}*/
