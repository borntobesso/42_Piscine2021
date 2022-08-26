/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 18:41:17 by sojung            #+#    #+#             */
/*   Updated: 2021/10/18 10:05:59 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_is_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	*ft_strcapitalize(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		if (ft_is_digit(*ptr) || ft_is_upper(*ptr) || ft_is_lower(*ptr))
		{
			if (ft_is_digit(*ptr))
				while (ft_is_digit(ptr[1]))
					ptr++;
			else if (ft_is_lower(*ptr))
				*ptr -= 32;
			while (ft_is_upper(*(++ptr)) || ft_is_lower(*ptr))
				if (ft_is_upper(*ptr))
					*ptr += 32;
		}
		else
			ptr++;
	}
	return (str);
}
