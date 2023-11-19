NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = print_int.c\
    print_str.c\
    ft_printf.c\
    print_low_hex.c\
	print_upp_hex.c \
	print_uns_dec.c \
	ft_putchar_fd.c \
	print_poi.c
	
	
OBJ = ${SRC:.c=.o}

all: $(NAME)

$(NAME):$(OBJ)
		ar rcs $@ $^

%.o : %.c
		cc ${CFLAGS} -o $@ -c $^

clean :
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re