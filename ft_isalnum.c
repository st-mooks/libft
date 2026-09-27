/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 14:11:42 by mbadarin          #+#    #+#             */
/*   Updated: 2026/09/24 10:35:54 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	c = ft_atoi(argv[1]);
	printf("%c is ", c);
	if (!ft_isalnum(c))
		printf("not ");
	printf("alphanumeric!\n");
	printf("isalnum says: %d\n", isalnum(c));
	return (0);
}*/
