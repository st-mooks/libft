/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_screen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@students.42amman.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 10:25:53 by mbadarin          #+#    #+#             */
/*   Updated: 2026/10/03 13:50:30 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

int	main_screen(char *test_name, char *func_names[])
{
	int	func_count;

	printf("Welcome to the testing suite for "BOLD UL"%s"RESET".\n\n"
			"", test_name);
	printf("You can choose which function you wish to test from the list"
			"below.\n"GREEN"Green"RESET" means that the test case was passed. "
			RED"Red"RESET" means that the test case failed.\n\n");
	func_count = 0;
	while (func_names[func_count])
	{
		printf("%d) %s\n", func_count, func_names[func_count]);
		func_count++;
	}
	func_count--;
	return (func_count);
}
