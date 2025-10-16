/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkabagoz <bkabagoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:13:33 by bkabagoz          #+#    #+#             */
/*   Updated: 2025/10/09 20:01:06 by bkabagoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	product;

	if (power < 0)
		return (0);
	product = 1;
	while (power != 0)
	{
		product *= nb;
		power--;
	}
	return (product);
}
