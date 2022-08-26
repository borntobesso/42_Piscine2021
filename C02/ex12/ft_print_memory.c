/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 14:28:01 by sojung            #+#    #+#             */
/*   Updated: 2021/10/17 16:01:51 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_char_to_hex(char c)
{
	char	first;
	char	second;
	char	lookup[];

	lookup[] = "0123456789abcdef";
	first = lookup[c / 16];
	second = lookup[c % 16];
	ft_putchar(first);
	ft_putchar(second);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
}
