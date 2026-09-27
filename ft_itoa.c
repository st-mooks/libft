/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:36:05 by mbadarin          #+#    #+#             */
/*   Updated: 2026/09/27 10:45:36 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	abs_val(int n)
{
	long	l;

	l = n;
	if (l < 0)
		l *= -1;
	return (l);
}

void	flip_str(char *str, int len)
{
	int		i;
	int		n;
	char	*str_flipped;

	str_flipped = malloc((len) * sizeof(char));
	i = 0;
	n = 0;
	if (str[i] == '-')
		str_flipped[n++] = '-';
	while (str[i])
	{
		str_flipped[n++] = str[len - i - 1];
		i++;
	}
	i = 0;
	while (str[i])
	{
		str[i] = str_flipped[i];
		i++;
	}
	free(str_flipped);
}

void	parse_positive(long n, char *str, int start_idx)
{
	int		i;
	char	*base;

	base = "0123456789";
	i = start_idx;
	if (n == 0)
		str[i++] = '0';
	while (n > 0)
	{
		*(str + i) = base[n % 10];
		n /= 10;
		i++;
	}
	*(str + i) = '\0';
	flip_str(str, i);
}

void	parse_negative(int n, char *str)
{
	long	l;

	l = abs_val(n);
	*str = '-';
	parse_positive(l, str, 1);
}

char	*ft_itoa(int n)
{
	char	*str;

	str = malloc(12 * sizeof(char));
	if (!str)
		return (NULL);
	else if (n >= 0)
		parse_positive((long)n, str, 0);
	else
		parse_negative(n, str);
	return (str);
}
/*
int	main(int argc, char *argv[])
{
	char	*str;

	if (argc != 2)
		{
			printf("INVALID/EMPTY INPUT. EXITING\n");
			exit(EXIT_FAILURE);
		}
	str = ft_itoa(ft_atoi(argv[1]));
	printf("n=%s\nstr=%s\nft_strlen(str)=%zu\n", argv[1], str, ft_strlen(str));
	return (0);
}*/
