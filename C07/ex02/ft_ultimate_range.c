/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkabagoz <bkabagoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:38:41 by bkabagoz          #+#    #+#             */
/*   Updated: 2025/10/15 17:43:54 by bkabagoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	size = max - min;
	*range = (int *)malloc(sizeof(int) * size);
	if (!*range)
	{
		*range = NULL;
		return (-1);
	}
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}
