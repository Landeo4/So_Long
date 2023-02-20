# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpotilli@student42.fr  <tpotilli@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/06 10:25:01 by tpotilli@st       #+#    #+#              #
#    Updated: 2023/02/16 16:11:27 by tpotilli@st      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
LIBFT = libft.a
MLX = libmlx.a

LFT_PATH = ./libft/
MLX_PATH = ./mlx/
INC_PATH = ./include/
SRC_PATH = ./src/
CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJ = $(patsubst $(SRC_PATH)%.c,%.o,$(wildcard $(SRC_PATH)*.c))
MLX_CF = -lm -lbsd -lmlx -lXext -lX11

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT) $(MLX)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -L$(LFT_PATH) -L$(MLX_PATH) -lft $(MLX_CF)

$(OBJ): %.o: $(SRC_PATH)%.c
	$(CC) $(CFLAGS) -c -I$(INC_PATH) $< -o $@

$(MLX):
	make -C $(MLX_PATH)

$(LIBFT):
	make -C $(LFT_PATH)

clean:
	rm -f $(OBJ)
	make -C $(MLX_PATH) clean
	make -C $(LFT_PATH) clean

fclean: clean
	rm -f $(NAME)
	rm -f $(LIBFT)
	make -C $(MLX_PATH) clean
	make -C $(LFT_PATH) fclean

re: fclean all
