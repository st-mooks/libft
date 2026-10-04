/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@students.42amman.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 12:59:58 by mbadarin          #+#    #+#             */
/*   Updated: 2026/10/03 13:49:37 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

#include "testcases.h"

void	launch_tests(char *test_func)
{
	void	*actual;
	int		actual_size;

	switch (test_func_idx)
	{
		case ("ft_atoi"):
			
			break ;
		case (default):
			printf(RED"TEST NOT AVAILABLE FOR THIS FUNCTION YET!\n"RESET);
			break ;
	}
}
