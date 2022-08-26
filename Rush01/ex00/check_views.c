/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_views.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:37:12 by sojung            #+#    #+#             */
/*   Updated: 2021/10/24 21:29:57 by mchebbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_view_up(int *tab_arg, int *tab_res, int n)
{
	int	i;
	int	max_height;
	int	viewed_cell;

	i = 0;
	max_height = 0;
	viewed_cell = 0;
	if (n / 4 == 3)
	{
		while (i < 4)
		{
			if (tab_res[i * 4 + n % 4] > max_height)
			{
				max_height = tab_res[i * 4 + n % 3];
				viewed_cell++;
			}
			i++;
		}
		if (tab_arg[n % 4] != viewed_cell)
			return (0);
	}
	return (1);
}

int	check_view_right(int *tab_arg, int *tab_res, int n)
{
	int	i;
	int	max_height;
	int	viewed_cell;

	i = 3;
	max_height = 0;
	viewed_cell = 0;
	if (n % 4 == 3)
	{
		while (i >= 0)
		{
			if (tab_res[n / 4 + i] > max_height)
			{
				max_height = tab_res[n / 4 + i];
				viewed_cell++;
			}
			i--;
		}
		if (tab_arg[12 + n / 4] != viewed_cell)
			return (0);
	}
	return (1);
}

int	check_view_down(int *tab_arg, int *tab_res, int n)
{
	int	i;
	int	max_height;
	int	viewed_cell;

	i = 3;
	max_height = 0;
	viewed_cell = 0;
	if (n / 4 == 3)
	{
		while (i >= 0)
		{
			if (tab_res[i * 4 + n % 4] > max_height)
			{
				max_height = tab_res[i * 4 + n % 4];
				viewed_cell++;
			}
			i--;
		}
		if (tab_arg[4 + n % 4] != viewed_cell)
			return (0);
	}
	return (1);
}

int	check_view_left(int *tab_arg, int *tab_res, int n)
{
	int	i;
	int	max_height;
	int	viewed_cell;

	i = 0;
	max_height = 0;
	viewed_cell = 0;
	if (n % 4 == 3)
	{
		while (i < 4)
		{
			if (tab_res[n / 4 + i] > max_height)
			{
				max_height = tab_res[n / 4 + i];
				viewed_cell++;
			}
			i++;
		}
		if (tab_arg[8 + n / 4] != viewed_cell)
			return (0);
	}
	return (1);
}
