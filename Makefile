# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmartore <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/19 11:35:14 by jmartore          #+#    #+#              #
#    Updated: 2025/02/19 11:39:50 by jmartore         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC =  c
CFLAGS = -Wall -Wextra -Werror
SRC = $(wildcard src/*.c)
OBJ = $(SRC:.c=.o)

.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME) : $(OBJ)
	ar rcs $@ $^

clean:
	rm -f $(OBJ(

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJ)
	ar rcs $(NAME) $^
