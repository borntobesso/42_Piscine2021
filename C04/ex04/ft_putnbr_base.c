/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 14:30:55 by sojung            #+#    #+#             */
/*   Updated: 2021/10/21 11:57:29 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_isvalid_base(char *s)
{
	int	i;
	int	j;

	i = 0;
	while (s[i] != '\0')
	{
		j = i + 1;
		while (s[j] != '\0')
		{
			if (s[i] == s[j] || s[i] == '+' || s[i] == '-')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && ft_isvalid_base(s))
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;
	int	n;

	len = ft_strlen(base);
	if (len > 1)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			n = -nbr;
		}
		else
			n = nbr;
		if (n > len - 1)
		{
			ft_putnbr_base(n / len, base);
			n = n % len;
		}
		ft_putchar(base[n]);
	}
}
