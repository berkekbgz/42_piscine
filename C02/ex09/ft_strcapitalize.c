/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkabagoz <bkabagoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 18:59:23 by bkabagoz          #+#    #+#             */
/*   Updated: 2025/10/06 16:55:42 by bkabagoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_alphanumeric(char c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9')
	);
}

int	is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	found_space;

	i = 0;
	found_space = 1;
	while (str[i] != '\0')
	{
		if (found_space && is_lowercase(str[i]))
		{
			str[i] -= 32;
			found_space = 0;
		}
		else if (!found_space && is_uppercase(str[i]))
		{
			str[i] += 32;
		}
		else if (!is_alphanumeric(str[i]))
			found_space = 1;
		else
			found_space = 0;
		i++;
	}
	return (str);
}
