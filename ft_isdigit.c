/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 14:06:17 by mbadarin          #+#    #+#             */
/*   Updated: 2026/09/29 13:48:37 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int	main(int argc, char *argv[])
{
	int	c;

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
	if (!ft_isdigit(c))
		printf("not ");
	printf("a digit!\n");
	printf("isdigit says: %d", isdigit(c));
	return (0);
}*/
