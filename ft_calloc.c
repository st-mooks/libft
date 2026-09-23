/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 12:35:43 by mbadarin          #+#    #+#             */
/*   Updated: 2026/09/23 13:29:00 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	**alloc_arr;

	if (nmemb * size > INT_MAX)
		return (NULL);
	alloc_arr = malloc(sizeof(void *) * nmemb);
	i = 0;
	while (i < nmemb)
	{
		alloc_arr[i] = malloc(size);
		if (!alloc_arr[i])
			return (NULL);
		ft_bzero(alloc_arr[i], size);
		i++;
	}
	return (alloc_arr);
}

int	main(void)
{
	int		*ft_calloc_return;
	int		*calloc_return;
	size_t	nmemb;

	nmemb = 10;
	ft_calloc_return = ft_calloc(nmemb, sizeof(int));
	calloc_return = calloc(nmemb, sizeof(int));
	printf("ft_calloc:\nsizeof(ft_calloc_return) = %zu\n"
			"contents of ft_calloc[0] = ", sizeof(ft_calloc_return));
	printf("%d\n", ft_calloc_return[0]);
	printf("calloc:\nsizeof(calloc_return) = %zu\n"
			"contents of calloc[0] = ", sizeof(calloc_return));
	printf("%d\n", calloc_return[0]);
	return (0);
}
