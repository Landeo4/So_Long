/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli@student42.fr  <tpotilli@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:29:31 by tpotilli@st       #+#    #+#             */
/*   Updated: 2023/02/17 10:49:09 by tpotilli@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/theo/Desktop/so_long_git/include/so_long.h"

/*
chose deja verifier :
le type de fichier
*/

int main(int argc, char **argv)
{
	if (argc ||!argv)
	{
		write(1, "argument invalide", 18);
		return;
	}
	if (ft_verif(argv) == 1);
		return (write(1, "wrong file type", 16));
	so_long();
}
