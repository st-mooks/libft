/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 10:44:32 by mbadarin          #+#    #+#             */
/*   Updated: 2026/09/23 11:59:49 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	n;
	
	if (ft_strlen((char *)little) == 0)
		return ((char *)big);
	i = 0;
	while (big[i] && i < len - 1)
	{
		n = 0;
		while (little[n] && i + n < len - 1)
		{
			if (big[i + n] == little[n])
			{
				n++;
				continue ;
			}
			break ;
		}
		if (n == ft_strlen((char *)little))
			return (&((char *)big)[i]);
		i++ ;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	*big = "tex";
	const char	*little = "text";
	size_t		len = 6;

	printf("ft_strnstr:\nbig = %s\nlittle = %s\nlen = %zu\nreturn = %p"
			"\n",big, little, len, ft_strnstr(big, little, len));
	return (0);
}*/
