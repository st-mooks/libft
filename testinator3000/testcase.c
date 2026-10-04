/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testcase.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@students.42amman.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 11:03:01 by mbadarin          #+#    #+#             */
/*   Updated: 2026/10/03 12:31:04 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

t_testcase	*create_testcase(void *expected_value, int size)
{
	t_testcase	*testcase;
	
	testcase = malloc(sizeof(t_testcase));
	if (!testcase)
		return (NULL);
	testcase->expected = expected_value;
	testcase->expected_size = size;
	testcase->actual = NULL;
	testcase->actual_size = 0;
	return (testcase);
}

void	update_actual_testcase(t_testcase *testcase, void *actual_value, int size)
{
	testcase->actual = actual_value;
	testcase->actual_size = size;
}

int	validate_testcase(t_testcase *testcase)
{
	int	result;

	result = ft_memcmp(testcase->actual, testcase->expected, testcase->expected_size);
	return (!result && testcase->expected_size == testcase->actual_size);
}
