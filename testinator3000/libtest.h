/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libtest.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@students.42amman.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 14:19:41 by mbadarin          #+#    #+#             */
/*   Updated: 2026/10/03 12:59:49 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBTEST_H
# define LIBTEST_H

#define RESET	"\x1b[0m"
#define BOLD	"\x1b[1m"
#define FAINT	"\x1b[2m"
#define ITALIC	"\x1b[3m"
#define UL		"\x1b[4m"
#define RED		"\x1b[31m"
#define GREEN	"\x1b[32m"

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <bsd/string.h>
# include <ctype.h>
# include <limits.h>
# include <stddef.h>
# include <stdint.h>
# include "../libft.h"
typedef struct s_testcase
{
	void	*actual;
	void	*expected;
	int		actual_size;
	int		expected_size;
}	t_testcase;

int			main_screen(char *test_name, char *func_names[]);
char		*parse_input(char *message, int size);
void		clear_stdin(void);
t_testcase	*create_testcase(void *actual, int size);
void		update_actual_testcase(t_testcase *testcase, void *actual_value, int size);
int			validate_testcase(t_testcase *testcase);
void		launch_test(int	test_func_idx);
#endif
