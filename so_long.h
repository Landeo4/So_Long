/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:03:33 by tpotilli@st       #+#    #+#             */
/*   Updated: 2023/02/14 17:07:24 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "/mnt/nfs/homes/tpotilli/Desktop/So_Long/minilibx-linux/mlx.h"

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