/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli@student42.fr  <tpotilli@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:03:33 by tpotilli@st       #+#    #+#             */
/*   Updated: 2023/02/13 15:32:21 by tpotilli@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <mlx.h>

typedef struct s_game
{
	int	i;
}	t_game;

int	ft_strlen(char *s);
int main(int argc, char **argv);
int	ft_map_error(char *nom);

#endif