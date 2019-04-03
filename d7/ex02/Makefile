# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atourner <atourner@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/25 10:42:41 by atourner          #+#    #+#              #
#    Updated: 2019/04/03 20:18:03 by atourner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = template

COMPILE = clang++ -Wall -Werror -Wextra

SRC =	main.cpp

TEMPLATE = Array.hpp

CMP = $(TEMPLATE:.hpp=.hpp.gch)

.PHONY:    all clean fclean re

all : NAME

NAME :
	$(COMPILE) $(SRC) -o $(NAME)

clean :
	rm -rf $(CMP)

fclean : clean
	rm -rf $(NAME)

re : fclean all

test: re
	./$(NAME)