/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli@student42.fr  <tpotilli@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:29:32 by tpotilli@st       #+#    #+#             */
/*   Updated: 2023/02/13 15:39:23 by tpotilli@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void ft_mlx()
{
	void *mlx_ptr;
	void *win_ptr;
	
	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window( mlx_ptr, 500, 500, "mlx test");
	mlx_loop(mlx_ptr);
}
