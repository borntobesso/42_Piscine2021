/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 19:31:05 by sojung            #+#    #+#             */
/*   Updated: 2021/11/03 15:20:15 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (length >= 2 && i < length - 1 && (*f)(tab[i], tab[i + 1]) == 0)
		i++;
	if (length >= 2 && i < length - 1 && (*f)(tab[i], tab[i + 1]) > 0)
	{
		while (i < length - 1 && (*f)(tab[i], tab[i + 1]) >= 0)
		{
			i++;
			if (i < length - 1 && (*f)(tab[i], tab[i + 1]) < 0)
				return (0);
		}
	}
	else if (length >= 2 && i < length - 1 && (*f)(tab[i], tab[i + 1]) < 0)
	{	
		while (i < length - 1 && (*f)(tab[i], tab[i + 1]) <= 0)
		{
			i++;
			if (i < length - 1 && (*f)(tab[i], tab[i + 1]) > 0)
				return (0);
		}
	}
	return (1);
}
