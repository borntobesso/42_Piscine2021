/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:53:56 by sojung            #+#    #+#             */
/*   Updated: 2021/10/28 10:57:16 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_valid_base(char *s);
int	is_base(char c, char *str);
int	ft_atoi(char *nbr, char *base);

int	ft_count_div(int n, int len)
{
	int	i;

	i = 0;
	while (n > len - 1)
	{
		n = n / len;
		i++;
	}
	return (i);
}

void	ft_set(int n, char *res, int size, int len)
{
	int	i;

	if (n < 0)
	{
		res[0] = '-';
		n = -n;
		res++;
	}
	i = size;
	while (i > 0)
	{
		res[i - 1] = n % len;
		n = n / len;
		i--;
	}
	res[size] = '\0';
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		len;
	int		n;
	int		size;
	char	*res;

	if (!(ft_valid_base(base_from) && ft_valid_base(base_to)))
		return (NULL);
	len = 0;
	while (base_to[len])
		len++;
	n = ft_atoi(nbr, base_from);
	if (n < 0)
		size = ft_count_div(-n, len) + 2;
	else
		size = ft_count_div(n, len) + 1;
	res = (char *)malloc(sizeof(char) * (size + 1));
	if (res == NULL)
		return (0);
	ft_set(n, res, size, len);
	return (res);
}
