/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:58:08 by sojung            #+#    #+#             */
/*   Updated: 2021/10/15 10:03:46 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_combn(int n)
{
	char	a;
	char	b;

	a = '0';
	while (a < 10 - n)
	{
		write(1, &a, 1);
		while (n >= 2)
			ft_print_combn(--n);
		b = a + 1;
		while (b < 10)
		{
			write(1, &b, 1);
			write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
