NAME:= libft.a
CFLAGS:= -Wall -Werror -Wextra 
SOURCES:= ft_isalpha.c
OBJECTS:= ${SOURCES:%.c:%.o}
all: ${NAME}
${NAME}: ${OBJECTS}
	ar a $@ $^
clean:
	rm ${OBJECTS}
fclean: clean
	rm ${NAME}
re: fclean all
.PHONY: all clean fclean re
