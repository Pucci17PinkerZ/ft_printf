CC := cc
CFLAGS := -Wall -Wextra -Werror
SRC := ft_printf.c

 SRC_BONUS :=
OBJ := $(SRC:.c=.o)
OBJ_BONUS := $(SRC_BONUS:.c=.o)
NAME := ft_printf.a
RM := rm -f

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ) $(OBJ_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

#bonus
bonus: $(OBJ) $(OBJ_BONUS)
	ar rcs $(NAME) $^

.PHONY: all clean fclean re bonus