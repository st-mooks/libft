/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 14:11:42 by mbadarin          #+#    #+#             */
/*   Updated: 2026/09/29 13:24:14 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//ft_isalpha can be substituted with a static function here
//ft_isdigit can be substituted with  a static function here
//Total number of functions (including above): 3

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	return (0);
}
/*
int	main(int argc, char *argv[])
{
	char	c;
	if (argc != 2)
	{
		printf("INVALID/EMPTY INPUT. EXITING\n");
		exit(EXIT_FAILURE);
	}
	if (ft_strlen(argv[1]) > 1)
		c = ft_atoi(argv[1]);
	else
		c = argv[1][0];
	printf("%c is ", c);
	if (!ft_isalnum(c))
		printf("not ");
	printf("alphanumeric!\n");
	printf("isalnum says: %d\n", isalnum(c));
	return (0);
}*/
