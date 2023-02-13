/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli@student42.fr  <tpotilli@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:02:49 by tpotilli@st       #+#    #+#             */
/*   Updated: 2023/02/13 15:09:24 by tpotilli@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// utiliser strlen puis verif si ca fait reb.

#include "so_long.h"

int	ft_map_error(char *nom)
{
	int	i;

	i = ft_strlen(nom);
	i--;
	while (nom[i])
	{
		if (nom[i] == 'r')
			i--;
		else
			return (1);
		if (nom[i] == 'e')
			i--;
		else
			return (1);
		if (nom[i] == 'b')
			i--;
		else
			return (1);
		if (nom[i] == '.')
			return (0);
		else
			return (1);
	}
}
