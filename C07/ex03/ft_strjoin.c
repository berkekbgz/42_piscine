/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkabagoz <bkabagoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:44:47 by bkabagoz          #+#    #+#             */
/*   Updated: 2025/10/16 17:18:32 by bkabagoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[i + dest_len] = src[i];
		i++;
	}
	dest[i + dest_len] = src[i];
	return (dest);
}

int	calc_size(int size, char **strs, char *sep)
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
	total_size += (i - 1) * ft_strlen(sep);
	return (total_size);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		total_size;

	if (size < 1)
	{
		str = ((char *)malloc(sizeof(char)));
		if (str)
			*str = '\0';
		return (str);
	}
	total_size = calc_size(size, strs, sep);
	str = (char *)malloc(sizeof(char) * total_size);
	if (!str)
		return (0);
	*str = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i != size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
