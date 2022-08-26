/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 12:15:32 by sojung            #+#    #+#             */
/*   Updated: 2021/10/28 10:27:44 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_total_size(int size, char **strs, char *sep)
{
	int	total_size;
	int	i;

	i = 0;
	total_size = 0;
	while (i < size)
	{
		total_size += ft_strlen(strs[i]);
		i++;
	}
	total_size += (ft_strlen(sep) * (size - 1)) + 1;
	return (total_size);
}

void	ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*dest != '\0')
		dest++;
	while (src[i] != '\0')
	{
		*dest = src[i];
		i++;
		dest++;
	}
	*dest = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;

	if (size <= 0)
	{
		res = malloc(sizeof(char) * 1);
		return (res);
	}
	res = (char *)malloc(sizeof(char) * ft_total_size(size, strs, sep));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ft_strcat(res, strs[i]);
		if (i < size - 1)
			ft_strcat(res, sep);
		i++;
	}
	return (res);
}
