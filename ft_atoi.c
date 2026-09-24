/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 12:12:00 by mbadarin          #+#    #+#             */
/*   Updated: 2026/09/24 09:25:03 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		sum;
	int		sign;

	sum = 0;
	sign = 1;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign *= -1;
		nptr++;
	}
	while (*nptr)
	{
		if (!ft_isdigit(*nptr))
			break ;
		sum *= 10;
		sum += (int)(*nptr - '0');
		nptr++;
	}
	return (sum * sign);
}
/*
int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("INVALID/EMPTY INPUT. EXITING\n");
		exit(EXIT_FAILURE);
	}
	printf("ft_atoi:\nnptr = %s\nreturn = %d\n", argv[1], ft_atoi(argv[1]));
	printf("****\natoi:\nnptr = %s\nreturn = %d\n", argv[1], atoi(argv[1]));
	return (0);
}*/
