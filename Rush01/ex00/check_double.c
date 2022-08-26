/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_double.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:35:01 by sojung            #+#    #+#             */
/*   Updated: 2021/10/24 21:29:08 by mchebbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_row(int *tab_res, int n)
{
	int	 i;

	if (n % 4 > 0)
	{
		i = 1;
		while (n - i >= 0)
		{
			if (tab_res[n - i] == tab_res[n])
				return (0);
			i++;
		}
		return (1);
	}
	return (1);
}

int	check_col(int *tab_res, int n)
{
	int	 i;

	if (n / 4 > 0)
	{
		i = 1;
		while (n - (4 * i) >= 0)
		{
			if (tab_res[n - (4 * i)] == tab_res[n])
				return (0);
			i++;
		}
		return (1);
	}
	return (1);
}
