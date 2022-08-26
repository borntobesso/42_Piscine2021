/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:53:56 by sojung            #+#    #+#             */
/*   Updated: 2021/10/28 10:51:33 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_valid_base(char *s)
{
	int	i;
	int	j;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '-' || s[i] == '+' || s[i] == ' '
			|| (s[i] >= '\t' && s[i] <= '\r'))
			return (0);
		j = i + 1;
		while (s[j] != '\0')
		{
			if (s[i] == s[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

int	is_base(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi(char *nbr, char *base)
{
	int	sign;
	int	res;
	int	len;

	len = 0;
	while (nbr[len])
		len++;
	while ((*nbr >= '\t' && *nbr <= '\r') || *nbr == ' ')
		nbr++;
	sign = 1;
	while (*nbr == '+' || *nbr == '-')
	{
		if (*nbr == '-')
			sign *= -1;
		nbr++;
	}
	res = 0;
	while (*nbr && (is_base(*nbr, base) != -1))
	{
		res = res * len + base[is_base(*nbr, base)] - '0';
		nbr++;
	}
	return (sign * res);
}
