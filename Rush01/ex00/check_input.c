/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchebbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 20:55:02 by mchebbi           #+#    #+#             */
/*   Updated: 2021/10/24 21:29:20 by mchebbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_input(char *str)
{
	int	i;
	int	count_space;
	int	count_int;

	count_space = 0;
	count_int = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			count_space++;
		else if (i % 2 == 0 && str[i] >= '1' && str[i] <= '4')
			count_int++;
		else if (i % 2 != 0 && str[i] >= '1' && str[i] <= '4')
			return (0);
		i++;
	}
	if (count_space != 15 || count_int != 16)
		return (0);
	return (1);
}
