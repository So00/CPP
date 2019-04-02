# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atourner <atourner@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/25 10:42:41 by atourner          #+#    #+#              #
#    Updated: 2019/04/02 20:37:38 by atourner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = identify

COMPILE = clang++ -Wall -Werror -Wextra

SRC =	main.cpp\
		A.cpp\
		B.cpp\
		C.cpp\
		Base.cpp

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

test: re
	./$(NAME)