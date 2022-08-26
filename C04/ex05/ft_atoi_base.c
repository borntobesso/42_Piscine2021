/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:01:02 by sojung            #+#    #+#             */
/*   Updated: 2021/10/21 12:03:09 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_issign(char c)
{
	if (c == '+' || c == '-')
	{
		if (c == '-')
			return (-1);
		else
			return (1);
	}
	else
		return (0);
}

int	ft_isvalid_base(char *s)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		if ((s[i] >= '\t' && s[i] <= '\r') || s[i] == ' ')
			return (0);
		if (s[i] == '+' || s[i] == '-')
			return (0);
		j = i + 1;
		while (s[j])
		{
			if (s[i] == s[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_isbase(char c, char *base)
{
	int	i;

	i = 0;
	while (*base)
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_strlen(char *s)
{	
	int	i;

	i = 0;
	while (*s && ft_isvalid_base(s))
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	res;
	int	i;
	int	len;

	len = ft_strlen(base);
	if (len <= 1 || ft_isvalid_base(base) == 0)
		return (0);
	i = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	sign = 1;
	while (ft_issign(str[i]) != 0)
	{
		if (ft_issign(str[i]) == -1)
			sign = -1 * sign;
		i++;
	}
	res = 0;
	while (ft_isbase(str[i++], base) != -1)
		res = res * len + i;
	return (res * sign);
}
