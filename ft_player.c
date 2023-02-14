/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_player.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:56:26 by tpotilli          #+#    #+#             */
/*   Updated: 2023/02/14 17:09:30 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

typedef struct s_game;
{
	i = 0;
	cpt = 0;
	upper = 0;
	lower = 0;
	left = 0;
	right = 0;
	end = 0;
}	t_game;

char *ft_player(char **map)
{
	int i;
	char **player;

	i = ft_position_player(player);
		if ('w')
			t_game->upper++;
		if ('s')
			t_game->lower++;
		if ('a')
			t_game->left++;
		if ('d')
			t_game->right++;
}
