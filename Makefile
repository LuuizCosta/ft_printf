NAME =	libftprintf.a
FLAGS =	-Wall -Werror -Wextra
CC =	clang
OBJ =	$(SRC:.c=.o)


SRC =	ft_printf.c \
		convert.c \
		ft_printf_utils.c \
		ft_itoa.c \
		ft_utoa.c \
		show_char.c \
		show_hexa.c \
		show_not_a_param.c \
		show_numbers.c \
		show_percentage.c \
		show_string.c \


all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

$(OBJ): $(SRC)
	$(CC) -c $(FLAGS) $(SRC)



clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) $(OBJ)

re: fclean all

.PHONY: all clean fclean re bonus