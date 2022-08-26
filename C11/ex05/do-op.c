/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 21:12:44 by sojung            #+#    #+#             */
/*   Updated: 2021/11/03 14:10:33 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_plus(int a, int b);
int	ft_minus(int a, int b);
int	ft_divide(int a, int b);
int	ft_multi(int a, int b);
int	ft_modulo(int a, int b);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	unsigned int	n;

	if (nbr < 0)
	{
		n = -nbr;
		ft_putchar('-');
	}
	else
		n = nbr;
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int	ft_atoi(char *str)
{
	int	res;
	int	sign;

	res = 0;
	while (*str == ' ')
		str++;
	sign = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (sign * res);
}

int	arg_op(char *c)
{
	if (*c == '+')
		return (0);
	else if (*c == '-')
		return (1);
	else if (*c == '/')
		return (2);
	else if (*c == '*')
		return (3);
	else if (*c == '%')
		return (4);
	else
		return (-1);
}

int	main(int argc, char **argv)
{
	int	(*op[5])(int, int);
	int	opt;

	op[0] = ft_plus;
	op[1] = ft_minus;
	op[2] = ft_divide;
	op[3] = ft_multi;
	op[4] = ft_modulo;
	if (argc == 4)
	{
		opt = arg_op(argv[2]);
		if (opt == -1)
		{
			ft_putnbr(0);
			write(1, "\n", 1);
		}
		else
		{
			op[opt](ft_atoi(argv[1]), ft_atoi(argv[3]));
			write(1, "\n", 1);
		}
	}
	return (0);
}
