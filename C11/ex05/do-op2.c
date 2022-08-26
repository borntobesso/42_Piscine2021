/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:47:38 by sojung            #+#    #+#             */
/*   Updated: 2021/11/02 12:35:02 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nbr);

int	ft_plus(int a, int b)
{
	ft_putnbr(a + b);
	return (0);
}

int	ft_minus(int a, int b)
{
	ft_putnbr(a - b);
	return (0);
}

int	ft_divide(int a, int b)
{
	if (b == 0)
		write(1, "Stop : division by zero", 23);
	else
		ft_putnbr(a / b);
	return (0);
}

int	ft_multi(int a, int b)
{
	ft_putnbr(a * b);
	return (0);
}

int	ft_modulo(int a, int b)
{
	if (b == 0)
		write(1, "Stop : modulo by zero", 21);
	else
		ft_putnbr(a % b);
	return (0);
}
