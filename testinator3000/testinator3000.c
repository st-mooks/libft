/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testinator3000.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@students.42amman.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 13:09:30 by mbadarin          #+#    #+#             */
/*   Updated: 2026/10/03 14:09:50 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

#include "definitions.h"

int	main(void)
{
	char	*test_name;
	char	**func_names;
	char	*input;
	int		func_idx;
	int		func_count;

	test_name = TEST_NAME;
	func_names = ft_split(FUNC_NAMES, ',');
	func_idx = 0;
	while (func_names[func_idx])
	{
		func_names[func_idx] = ft_strtrim(func_names[func_idx], " ");
		func_idx++;
	}
	func_count = main_screen(test_name, func_names);
	input = parse_input("Please select which function you wish to test: "
	"(use the function's "ITALIC"number"RESET" to choose)\n", 4);
	func_idx = ft_atoi(input);
	while (func_idx > func_count || func_idx < 0)
	{
		printf(RED"INVLAID INPUT"RESET" please choose a function between: "
	GREEN"0"RESET" and "GREEN"%d"RESET"\n", func_count);
		input = parse_input("Please select which function you wish to test: "
	"(use the function's "ITALIC"index"RESET" to choose)\n", 4);
		func_idx = ft_atoi(input);
	}
	printf("Testing "ITALIC"%s"RESET":", func_names[func_idx]);
	
	//launch_tests(func_names[func_idx]);
}
