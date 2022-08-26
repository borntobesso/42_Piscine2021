/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   affichage.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:35:25 by sojung            #+#    #+#             */
/*   Updated: 2021/10/24 21:28:23 by mchebbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_affichage(int *tab_res)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		ft_putchar(tab_res[i] + 48);
		if (i % 4 < 3)
			ft_putchar(' ');
		if (i % 4 == 3)
			ft_putchar('\n');
		i++;
	}
}
