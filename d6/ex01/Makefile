# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atourner <atourner@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/25 10:42:41 by atourner          #+#    #+#              #
#    Updated: 2019/04/02 19:41:13 by atourner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serialize

COMPILE = clang++ -Wall -Werror -Wextra

SRC =	main.cpp

CMP = $(SRC:.cpp=.o)

.PHONY:    all clean fclean re

all : NAME

NAME : $(CMP)
	$(COMPILE) -o $(NAME) $(SRC)

%.o: %.cpp
	$(COMPILE) -c $< -o $@

clean :
	rm -rf $(CMP)

fclean : clean
	rm -rf $(NAME)

re : fclean all