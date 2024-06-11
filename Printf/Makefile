NAME = libftprintf.a

FILES = \
	ft_printf.c\
	ft_putunsigned.c\
	ft_puthex.c\
	ft_putnbr.c\
	ft_putstr.c\
	ft_putchar.c\
	ft_putchar_fd.c\
	ft_putptr.c\
	ft_strlen.c\

OBJ = $(FILES:.c=.o)

FLAGS = -Wall -Werror -Wextra

CC = clang

$(NAME): $(OBJ)
	@$(CC) -c $(FLAGS) $(FILES)
	@ar rcs $(NAME) $(OBJ)
	@echo "$(NAME) created!"

all: $(NAME)

clean:
	@rm -f $(OBJ)
	@echo "clean completed!"

fclean: 
	@rm -f $(OBJ)
	@rm -f $(NAME) $(BONUS_OBJ)
	@echo "fclean completed!"

re:	fclean all

test:	
	@$(CC) $(FILES) $(FLAGS) $(NAME) -o test.out
	@echo "test created!"

$(OBJ): %.o: %.c
	@$(CC) -c $(FLAGS) $< -o $@

.PHONY: all clean fclean re