/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 11:53:52 by mbadarin          #+#    #+#             */
/*   Updated: 2026/09/27 12:02:44 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
/*
void	capitalise(unsigned i, char *s)
{
	(void) i;
	if (*s >= 'a' && *s <= 'z')
		*s -= 32;
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("INVALID/EMPTY INPUT. EXITING\n");
		exit(EXIT_FAILURE);
	}
	ft_striteri(argv[1], capitalise);
	printf("function=capitalise\nresult str="
			"%s", argv[1]);
	return (0);
}*/
