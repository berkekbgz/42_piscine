/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkabagoz <bkabagoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:35:33 by bkabagoz          #+#    #+#             */
/*   Updated: 2025/10/15 17:35:21 by bkabagoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*arr;

	if (max <= min)
		return (NULL);
	i = 0;
	size = max - min;
	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
