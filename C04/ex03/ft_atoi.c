/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 18:05:59 by sojung            #+#    #+#             */
/*   Updated: 2021/10/21 11:56:25 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if ((c >= '\t' && c <= '\r') || c == ' ')
		return (1);
	else
		return (0);
}

int	ft_issign(char c)
{
	if (c == '-' || c == '+')
	{
		if (c == '-')
			return (-1);
		return (1);
	}
	else
		return (0);
}

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	res;
	int	sign;

	res = 0;
	while (ft_isspace(*str) && *str)
		str++;
	sign = 1;
	while (ft_issign(*str) != 0 && *str)
	{
		sign = sign * ft_issign(*str);
		str++;
	}
	while (ft_isdigit(*str) && *str)
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * sign);
}
