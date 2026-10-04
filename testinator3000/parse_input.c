/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@students.42amman.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 10:52:37 by mbadarin          #+#    #+#             */
/*   Updated: 2026/10/03 10:55:06 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

void	clear_stdin()
{
	int c;
	while ((c = getchar()) != '\n' && c != EOF);
}

char	*parse_input(char *message, int size)
{
	char    *input;

	printf("%s", message);
	input = malloc(size * sizeof(char));
	fgets(input, size, stdin);
	while (!ft_strchr(input, '\n'))
		clear_stdin();
	return (input);
}
