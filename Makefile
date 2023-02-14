# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/06 10:25:01 by tpotilli@st       #+#    #+#              #
#    Updated: 2023/02/14 17:28:05 by tpotilli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

SRCS =	so_long.c\
		utils/ft_strlen.c\
		main.c\
		windows.c\
		ft_verif.c\
		./minilibx-linux\

FLAGS = -Wall -Werror -Wextra 

CC = CC

LIB = -L ./mlx -lmlx -lXext -lX11

%.o: %.c
	$(CC) $(FLAGS) -I/usr/include -Imlx_linux -O3 -c $< -o $@

all :
	$(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -Lmlx_linux -lmlx_Linux -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz -o $(NAME)

clean :
	make clean -C mlx

fclean :
	make fclean -C mlx
	rm -f $(NAME)

re :
	fclean
		make