/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 20:42:06 by sojung            #+#    #+#             */
/*   Updated: 2021/10/31 21:46:16 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	count_word(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && is_charset(*str, charset))
			str++;
		if (*str && !is_charset(*str, charset))
		{
			count++;
			while (*str && !is_charset(*str, charset))
				str++;
		}
	}
	return (count);
}

char	*malloc_word(char *str, char *charset)
{
	int		i;
	char	*word;

	i = 0;
	while (str[i] && !is_charset(str[i], charset))
		i++;
	word = malloc(sizeof(char) * (i + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (str[i] && !is_charset(str[i], charset))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		size;
	char	**res;
	int		i;

	res = NULL;
	size = count_word(str, charset) + 1;
	res = malloc(sizeof(char *) * size);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str && is_charset(*str, charset))
			str++;
		if (*str && !is_charset(*str, charset))
		{
			res[i] = malloc_word(str, charset);
			i++;
			while (*str && !is_charset(*str, charset))
				str++;
		}
	}
	res[i] = 0;
	return (res);
}
