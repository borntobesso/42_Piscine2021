/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_check_pos.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:34:30 by sojung            #+#    #+#             */
/*   Updated: 2021/10/24 22:12:55 by mchebbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

int	check_pos(int *tab_arg, int *tab_res, int n)
{
	if (check_row(tab_res, n) && check_col(tab_res, n)
		&& check_view_up(tab_arg, tab_res, n)
		&& check_view_right(tab_arg, tab_res, n)
		&& check_view_down(tab_arg, tab_res, n)
		&& check_view_left(tab_arg, tab_res, n))
		return (1);
	else
		return (0);
}

int	solve(int *tab_arg, int *tab_res, int n)
{
	if (n >= 16 || n < 0)
	{
		if (n >= 16)
			return (1);
		return (0);
	}
	else
	{
		tab_res[n]++;
		if (tab_res[n] > 4)
		{
			tab_res[n] = 0;
			solve(tab_arg, tab_res, n - 1);
		}
		else if (check_pos(tab_arg, tab_res, n))
			solve(tab_arg, tab_res, n + 1);
		else
			solve(tab_arg, tab_res, n);
	}
	return (0);
}
