/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cescudie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 22:39:06 by cescudie          #+#    #+#             */
/*   Updated: 2021/10/31 18:50:37 by cescudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	*print(int *values, char *dico);
void	start(char *dico, char *number);
void	ft_open(char *str, char *dico);

int	argument_is_valid(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9') || i > 9)
			return (0);
		i++;
	}
	return (1);
}

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	convert(long value, int k, char *dico)
{
	int	h;
	int	t;
	int	u;
	int	tab[4];

	if (value / 1000 != 0)
		convert(value / 1000, k + 1, dico);
	value = value % 1000;
	h = value / 100;
	value = value % 100;
	t = value / 10 * 10;
	u = value % 10;
	if (t + u < 20)
	{
		u = t + u;
		t = 0;
	}
	tab[0] = h;
	tab[1] = t;
	tab[2] = u;
	tab[3] = k;
	print(tab, dico);
}

long	ft_atoi(char *str)
{
	int		i;
	long	r;

	i = 0;
	r = 0;
	while (str[i])
	{
		r = r * 10 + str[i] - 48;
		i++;
	}
	return (r);
}

int	main(int argc, char **argv)
{
	char	*dico;

	dico = "./numbers.dict";
	if (argc == 2)
	{
		if (argv[1][0] == 48 && argv[1][1] == 0)
			ft_open("0", dico);
		else
			start(dico, argv[1]);
		write(1, "\b", 1);
	}
	else if (argc == 3)
	{
		dico = argv[1];
		if (argv[2][0] == 48 && argv[1][1])
			ft_open("0", dico);
		else
			start(dico, argv[2]);
		write(1, "\b", 1);
	}
	else
		write(1, "Error\n", 6);
}
