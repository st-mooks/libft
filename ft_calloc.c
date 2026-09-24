/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 12:35:43 by mbadarin          #+#    #+#             */
/*   Updated: 2026/09/24 09:24:49 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	valid_params(size_t nmemb, size_t size)
{
	if (size == 0)
		return (0);
	if (SIZE_MAX / size < nmemb)
		return (0);
	return (1);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*alloc_arr;

	if (!valid_params(nmemb, size))
		return (NULL);
	alloc_arr = malloc(nmemb * size);
	if (!alloc_arr)
		return (NULL);
	ft_bzero(alloc_arr, nmemb * size);
	return (alloc_arr);
}
/*
int	main(void)
{
	int		*ft_calloc_return;
	int		*calloc_return;
	size_t	nmemb;

	nmemb = 10;
	ft_calloc_return = ft_calloc(nmemb, sizeof(int));
	calloc_return = calloc(nmemb, sizeof(int));
	printf("ft_calloc:\ncontents of ft_calloc[0] = %d\n"
			"", *ft_calloc_return);
	printf("calloc:\ncontents of calloc[0] = %d\n"
			"", *calloc_return);
	free(ft_calloc_return);
	free(calloc_return);
	return (0);
}*/
