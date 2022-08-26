/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 20:20:40 by sojung            #+#    #+#             */
/*   Updated: 2021/10/17 20:20:42 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(char start, char mid, char end, int x)
{
	int	i;

	ft_putchar(start);
	i = 0;
	while (i < x - 2)
	{
		ft_putchar(mid);
		i++;
	}
	if (x > 1)
	{
		ft_putchar(end);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	if (x > 0 && y > 0)
	{
		print_line('A', 'B', 'C', x);
		i = 0;
		while (i < y - 2)
		{
			print_line('B', ' ', 'B', x);
			i++;
		}
		if (y > 1)
		{
			print_line('A', 'B', 'C', x);
		}
	}
}
