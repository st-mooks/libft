/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 10:50:00 by mbadarin          #+#    #+#             */
/*   Updated: 2026/09/30 11:33:50 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//ft_strlen can be substituted with a static function here
//Total number of functions (including above): 2

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;

	result = malloc(ft_strlen(s) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	return (result);
}
/*
static char	capitalise(unsigned int i, char c)
{
	(void)i;

	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int	main(int argc, char *argv[])
{
	char	*str;

	if (argc != 2)
	{
		printf("INVALID/EMPTY INPUT. EXITING\n");
		exit(EXIT_FAILURE);
	}
	str = ft_strmapi(argv[1], capitalise);
	printf("original str=%s\nfuntction to apply=capitalise\n"
			"result str=%s\n", argv[1], str);
	free(str);
	printf("str freed successfully");
	return (0);
}*/
