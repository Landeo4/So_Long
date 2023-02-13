# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpotilli@student42.fr  <tpotilli@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/06 10:25:01 by tpotilli@st       #+#    #+#              #
#    Updated: 2023/02/13 13:48:10 by tpotilli@st      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

SRCS =	so_long.c\
		utils/ft_strlen.c\
		main.c\
		windows.c\
		ft_verif.c\

FLAGS = -Wall -Werror -Wextra 

CC = CC

LIB = -L ./mlx -lmlx -lXext -lX11

SRC = windows.c

all :
	$(NAME)

$(NAME) :
	make -C mlx
	$(CC) $(FLAGS) -o $(NAME) $(SRC) $(LIB)

clean :
	make clean -C mlx

fclean :
	make fclean -C mlx
	rm -f $(NAME)

re :
	fclean
		make