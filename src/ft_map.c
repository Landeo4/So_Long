/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli@student42.fr  <tpotilli@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:40:00 by tpotilli@st       #+#    #+#             */
/*   Updated: 2023/02/17 10:51:54 by tpotilli@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/theo/Desktop/so_long_git/include/so_long.h"

void ft_map()
{
	int fd;
	char *gnl_map;

	fd = open("map.ber", O_WRONLY);
	while (42)
	{
		gnl_map = get_next_line(fd);
		if (gnl_map == NULL)
			break ;
	}
	free(gnl_map);
}
/* avec le gnl map il faut trouve un moyen d'afficher 
les pixels un par un sur toute la fenetre mlx
*/