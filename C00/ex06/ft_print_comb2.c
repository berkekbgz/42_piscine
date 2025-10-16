/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkabagoz <bkabagoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 12:04:07 by bkabagoz          #+#    #+#             */
/*   Updated: 2025/09/26 18:53:34 by bkabagoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_helper(char i, char j, int add_space)
{
	write(1, &i, 1);
	write(1, &j, 1);
	if (add_space)
		write(1, " ", 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			ft_print_helper((i / 10) + '0', (i % 10) + '0', 1);
			ft_print_helper((j / 10) + '0', (j % 10) + '0', 0);
			if (i != 98 || j != 99)
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}
