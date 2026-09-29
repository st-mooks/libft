/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flip_case.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@students.42amman.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 12:55:08 by mbadarin          #+#    #+#             */
/*   Updated: 2026/09/29 09:05:33 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_flip_case(void *content)
{
	char	*str;

	str = (char *)content;
	while (*str)
	{
		if (ft_isalpha(*str))
		{
			if (*str > 'a' && *str < 'z')
				*str -= 32;
			else
				*str += 32;
		}
		str++;
	}
}
