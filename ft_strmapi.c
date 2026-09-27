/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 10:50:00 by mbadarin          #+#    #+#             */
/*   Updated: 2026/09/27 11:53:04 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
char	capitalise(unsigned int i, char c)
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
	return (0);
}*/
