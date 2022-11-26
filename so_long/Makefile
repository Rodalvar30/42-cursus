SRCS =  ./sources/draw.c ./sources/frame.c ./sources/free.c ./sources/gameplay.c ./sources/init.c  ./sources/map_check.c ./sources/moves.c ./sources/readmap.c  ./sources/animation.c ./sources/main.c

MLX_FLAG = libmlx.dylib
LIBFT = ./libraries/libft/libft.a

OBJS=$(SRCS:.c=.o)
NAME= so_long

HEADER = ./sources/so_long.h
CC = gcc
CFLAGS= -Wall -Wextra -Werror
MLX = -framework OpenGL -framework AppKit
RM= rm -f
LIBC = ar rcs

.c.o: 
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): ${OBJS}
	$(MAKE) -C ./libraries/libft 
	$(CC) $(CFLAGS) $(OBJS) $(MLX_FLAG) $(MLX) $(LIBFT) -o $(NAME)
clean:
	$(MAKE) -C ./libraries/libft clean
	$(RM) $(OBJS)

fclean: clean
	$(MAKE) -C ./libraries/libft fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re mlx libft