/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   library.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 20:04:14 by alambert          #+#    #+#             */
/*   Updated: 2021/10/24 20:52:57 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBRARY_H
# define LIBRARY_H

# include <unistd.h>

/* Data */
int		check_input(char *str);

/* Solve */
int		check_row(int *tab_res, int n);
int		check_col(int *tab_res, int n);
int		check_view_up(int *tab_arg, int *tab_res, int n);
int		check_view_right(int *tab_arg, int *tab_res, int n);
int		check_view_down(int *tab_arg, int *tab_res, int n);
int		check_view_left(int *tab_arg, int *tab_res, int n);
int		check_pos(int *tab_arg, int *tab_res, int n);

/* Engine */
int		solve(int *tab_arg, int *tab_res, int n);

/* Display */
void	ft_putchar(char c);
void	ft_affichage(int *tab_res);

#endif
