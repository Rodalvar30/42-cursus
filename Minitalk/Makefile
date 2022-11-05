SRCS_CLIENT= client.c ft_atoi.c ft_itoa.c ft_putstr_fd.c ft_putchar_fd.c ft_strlen.c ft_print_hex.c ft_print_num.c ft_print_pos.c ft_print_putchar.c ft_print_putstr.c ft_printf.c ft_print_percent.c ft_print_pointer.c
SRCS_SERVER= server.c ft_atoi.c ft_print_hex.c ft_itoa.c  ft_strlen.c ft_putstr_fd.c ft_putchar_fd.c ft_print_num.c ft_print_pos.c ft_print_putchar.c ft_print_putstr.c ft_printf.c ft_print_percent.c ft_print_pointer.c

OBJS_CLIENT= $(SRCS_CLIENT:.c=.o)
OBJS_SERVER= $(SRCS_SERVER:.c=.o)

CC= gcc
CFLAGS= -Wall -Wextra -Werror
LIBC= ar rcs
RM= rm -f
NAME_CLIENT= client
NAME_SERVER= server

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)


all: $(NAME_CLIENT) $(NAME_SERVER)

bonus: all

$(NAME_CLIENT): $(OBJS_CLIENT)
	$(CC) $(CFLAGS) -o $(NAME_CLIENT) $(OBJS_CLIENT)

$(NAME_SERVER): $(OBJS_SERVER)

	$(CC) $(CFLAGS) -o $(NAME_SERVER) $(OBJS_SERVER)
clean:
	$(RM) $(OBJS_CLIENT) $(OBJS_SERVER)

fclean: clean
	$(RM) $(NAME_CLIENT) $(NAME_SERVER)

re: fclean all

.PHONY: all clean fclean re bonus