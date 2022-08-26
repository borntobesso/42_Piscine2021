/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchebbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 20:22:48 by mchebbi           #+#    #+#             */
/*   Updated: 2021/10/24 22:12:00 by mchebbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

void	ft_argv(char *str, int *tab_arg)
{
	tab_arg[0] = str[0] - 48;
	tab_arg[1] = str[2] - 48;
	tab_arg[2] = str[4] - 48;
	tab_arg[3] = str[6] - 48;
	tab_arg[4] = str[8] - 48;
	tab_arg[5] = str[10] - 48;
	tab_arg[6] = str[12] - 48;
	tab_arg[7] = str[14] - 48;
	tab_arg[8] = str[16] - 48;
	tab_arg[9] = str[18] - 48;
	tab_arg[10] = str[20] - 48;
	tab_arg[11] = str[22] - 48;
	tab_arg[12] = str[24] - 48;
	tab_arg[13] = str[26] - 48;
	tab_arg[14] = str[28] - 48;
	tab_arg[15] = str[30] - 48;
}

int	main(int argc, char **argv)
{
	int	tab_res[16];
	int	tab_arg[16];
	int	i;

	i = 0;
	while (i < 16)
	{
		tab_res[i] = 0;
		i++;
	}
	if (argc == 2 && check_input(argv[1]))
	{		
		ft_argv(argv[1], tab_arg);
		solve(tab_arg, tab_res, 0);
		ft_affichage(tab_res);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
