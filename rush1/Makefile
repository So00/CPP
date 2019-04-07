# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atourner <atourner@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/11 11:36:18 by cvautrai          #+#    #+#              #
#    Updated: 2019/04/07 01:47:55 by atourner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_gkrellm

CC = clang++

FLAGS = -Wall -Wextra -Werror

SRCS =	main_ced.cpp			\
		MonitorSDL.cpp			\
		data/BasicModule.cpp	\
		data/Controller.cpp		\
		data/Cpu.cpp			\
		data/Model.cpp			\
		data/Ram.cpp			\
		data/Name.cpp			\
		data/OsInfo.cpp			\
		data/Date.cpp			\
		data/Processus.cpp		\
		data/Network.cpp		\
		ncurses.cpp				\

OBJS = $(SRCS:.cpp=.o)

FW_PATH = frameworks
SDL_PATH = $(FW_PATH)/SDL2.framework
TTF_PATH = $(FW_PATH)/SDL2_ttf.framework
SDL_FLAGS = -framework SDL2 -F $(FW_PATH) -framework SDL2_ttf -rpath $(FW_PATH)
NCURSES_FLAGS = -lncurses

.PHONY:	all clean fclean re

all:	$(NAME)

$(NAME): $(OBJS)
		$(CC) $(FLAGS)  -o $(NAME) $(OBJS) $(SDL_FLAGS) $(NCURSES_FLAGS)

%.o:%.cpp 
		$(CC) $(FLAGS) -c $< -o $@ -I $(SDL_PATH)/Headers -I $(TTF_PATH)/Headers -I data/.

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

ncurses: all
		./$(NAME) ncurses
