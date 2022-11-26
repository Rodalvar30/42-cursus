SRCS = get_next_line.c get_next_line_utils.c ft_split.c ft_substr.c ft_calloc.c ft_bzero.c
OBJS = ${SRCS:.c=.o}
NAME = libft.a
LIBC = ar rcs
CC = gcc 
RM = rm -f
CFLAGS = -Wall -Wextra -Werror 

.c.o: ${SRCS} 
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS} 

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re