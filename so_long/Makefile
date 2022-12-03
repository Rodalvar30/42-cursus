SRCS =  ./sources/draw.c ./sources/frame.c ./sources/free.c ./sources/gameplay.c ./sources/init.c  ./sources/map_check.c ./sources/moves.c ./sources/readmap.c  ./sources/main.c
SRCS_BONUS =  ./sources_bonus/draw.c ./sources_bonus/frame.c ./sources_bonus/free.c ./sources_bonus/gameplay.c ./sources_bonus/init.c  ./sources_bonus/map_check.c ./sources_bonus/moves.c ./sources_bonus/readmap.c  ./sources_bonus/animation.c ./sources_bonus/main.c ./sources_bonus/animation_move.c ./sources_bonus/animation2.c ./sources_bonus/animation3.c

MLX_FLAG = libmlx.dylib
LIBFT = ./libraries/libft/libft.a

OBJS=$(SRCS:.c=.o)
OBJS_BONUS =$(SRCS_BONUS:.c=.o)
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

bonus: ${OBJS_BONUS}
	$(MAKE) -C ./libraries/libft 
	$(CC) $(CFLAGS) $(OBJS_BONUS) $(MLX_FLAG) $(MLX) $(LIBFT) -o $(NAME)
clean:
	$(MAKE) -C ./libraries/libft clean
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(MAKE) -C ./libraries/libft fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re mlx libft bonus