/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cescudie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 22:04:39 by cescudie          #+#    #+#             */
/*   Updated: 2021/10/31 19:10:13 by cescudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		str_len(char *str);
void	ft_open(char *str, char *dico);

char	*ft_strrev(char *str)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = str_len(str);
	while (j > i)
	{
		j--;
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(sizeof(char) * 11);
	if (str == NULL)
		return (NULL);
	while (n)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	return (ft_strrev(str));
}

void	*print(int *values, char *dico)
{
	char	*tab;
	int		i;

	i = 1;
	tab = NULL;
	tab = malloc(sizeof(char) * (values[3] * 3 + 1));
	if (tab == NULL)
		return (NULL);
	if (values[0] > 0)
	{
		ft_open(ft_itoa(values[0]), dico);
		ft_open("100", dico);
	}
	if (values[1] != 0)
		ft_open(ft_itoa(values[1]), dico);
	if (values[2] != 0)
		ft_open(ft_itoa(values[2]), dico);
	if (values[3] != 0)
	{
		tab[0] = '1';
		while (i < values[3] * 3 + 1)
			tab[i++] = '0';
		ft_open(tab, dico);
	}
	return (NULL);
}
