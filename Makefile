NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SOURCE		= ft_printf.c \
              ft_putchar.c \
              ft_putstr.c \
              ft_puthex.c \
              ft_putnbr_base.c

OBJ = $(SOURCE:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
