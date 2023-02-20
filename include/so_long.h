/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli@student42.fr  <tpotilli@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:03:33 by tpotilli@st       #+#    #+#             */
/*   Updated: 2023/02/17 11:02:23 by tpotilli@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "/home/theo/Desktop/so_long_git/mlx/mlx.h"
#include "stdlib.h"

typedef struct s_game
{
	int	i;
	int cpt;
	int upper;
	int lower;
	int left;
	int right;
	int end;
}	t_game;

int	ft_strlen(char *s);
int main(int argc, char **argv);
int	ft_map_error(char *nom);

#endif