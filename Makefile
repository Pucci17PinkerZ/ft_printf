CC := cc
CFLAGS := -Wall -Wextra -Werror
SRC := ft_printf.c ft_print_hex.c ft_send.c print_char.c\
 print_digit.c print_format.c print_ptr.c print_str.c print_udigit.c\
 
OBJ := $(SRC:.c=.o)
NAME := libftprintf.a
RM := rm -f

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all


.PHONY: all clean fclean re