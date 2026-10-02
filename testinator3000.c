/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testinator3000.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbadarin <mbadarin@students.42amman.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 13:09:30 by mbadarin          #+#    #+#             */
/*   Updated: 2026/10/01 15:34:09 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define	RESET		"\x1b[0m"
#define	BOLD		"\x1b[1m"
#define	FAINT		"\x1b[2m"
#define	ITALIC		"\x1b[3m"
#define	UL			"\x1b[4m"
#define	RED			"\x1b[31m"
#define	GREEN		"\x1b[32m"


#include "libft.h"
//Include testing library;
#include "testing.h"

void	clear_stdin()
{
	int	c;

	while ((c = fgetc(stdin)) != '\n' && c != EOF);
}

int	main(void)
{
	char	*test_name = "libft";
	char	*func_names[] = {"ft_atoi.c", "ft_bzero.c", "ft_calloc.c", "ft_free_content.c", "ft_init_node.c", "ft_isalnum.c", "ft_isalpha.c", "ft_isascii.c", "ft_isdigit.c", "ft_isprint.c", "ft_itoa.c", "ft_lstadd_back.c", "ft_lstadd_front.c", "ft_lstclear.c", "ft_lstdelone.c", "ft_lstiter.c", "ft_lstlast.c", "ft_lstmap.c", "ft_lstnew.c", "ft_lstsize.c", "ft_memchr.c", "ft_memcmp.c", "ft_memcpy.c", "ft_memmove.c", "ft_memset.c", "ft_putchar_fd.c", "ft_putendl_fd.c", "ft_putnbr_fd.c", "ft_putstr_fd.c", "ft_split.c", "ft_strchr.c", "ft_strdup.c", "ft_striteri.c", "ft_strjoin.c", "ft_strlcat.c", "ft_strlcpy.c", "ft_strlen.c", "ft_strmapi.c", "ft_strncmp.c", "ft_strnstr.c", "ft_strrchr.c", "ft_strtrim.c", "ft_substr.c", "ft_tolower.c", "ft_toupper.c", NULL};
	char	input[4];
	int		test_func;
	printf("Welcome to the testing suite for "BOLD UL"%s"RESET".\n\n", test_name);
	printf("You can choose which function you wish to test from the list below.\n"GREEN"Green"RESET" means that the test case was passed. "RED"Red"RESET" means that the test case failed.\n\n");
	printf("Please select which function you wish to test: (use the function's "ITALIC"number"RESET" to choose)\n");
	int i = 0; 
	while (func_names[i])
	{
		printf("%d) %s\n", i + 1, func_names[i]);
		i++;
	}
	fgets(input, 4, stdin);
	test_func = ft_atoi(input);
	while (test_func > i || test_func < 1)
	{
		printf(RED"INVLAID INPUT"RESET" please choose a function between: "GREEN"1"RESET" and "GREEN"%d"RESET"\n", i);
		fgets(input, 4, stdin);
		test_func = ft_atoi(input);
		if (!ft_strchr(input, '\n'))
			clear_stdin();
	}
	printf("Testing "ITALIC"%s"RESET":", func_names[test_func - 1]);
}
