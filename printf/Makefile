CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
ARFLAGS = rcs
SRCS = ft_printf.c \
	ft_printf_utils.c \
	ft_printf_utils2.c

OBJS = $(SRCS:.c=.o)
all: $(NAME)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
$(NAME): $(OBJS)
	ar $(ARFLAGS) $@ $^
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re
