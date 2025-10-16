/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkabagoz <bkabagoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 17:44:37 by bkabagoz          #+#    #+#             */
/*   Updated: 2025/09/26 18:54:36 by bkabagoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_helper(char i, char j, char k)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &k, 1);
}

void	ft_print_comb(void)
{
	int			i;
	int			j;
	int			k;
	const int	stop = '9' + 1;

	i = '0';
	while (i < stop)
	{
		j = i + 1;
		while (j < stop)
		{
			k = j + 1;
			while (k < stop)
			{
				ft_print_helper(i, j, k);
				if (i != '7')
					write(1, ", ", 2);
				k++;
			}
			j++;
		}
		i++;
	}
}
