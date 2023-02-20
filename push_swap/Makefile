SRCS = utils.c checker.c index.c moves.c main.c cost.c move.c sort_three.c sort.c position.c
OBJS = $(SRCS:.c=.o)
NAME = push_swap
LIBFT = ./mega_libft/libft/libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all : $(NAME)

$(NAME) : $(OBJS)
	@$(MAKE) -C ./mega_libft/libft
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

clean :
	@$(MAKE) -C ./mega_libft/libft clean
	@$(RM) $(OBJS)

fclean : clean
	@$(MAKE) -C ./mega_libft/libft fclean
	@$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re libft