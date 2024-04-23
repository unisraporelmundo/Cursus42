# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iizquier <iizquier@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/15 14:35:14 by iizquier          #+#    #+#              #
#    Updated: 2024/04/23 14:30:28 by iizquier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = \
		ft_isalpha.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_isascii.c\
		ft_isalnum.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_strlen.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strncmp.c\
		ft_strnstr.c\

OBJ = $(FILES:.c=.o)

FLAGS = -Wall -Werror -Wextra

$(NAME): $(FILES) $(OBJ)
	@gcc -c $(FLAGS) $(FILES)
	@ar rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME) $(OBJ)

re: fclean all

.PHONY: all clean fclean re bonus
