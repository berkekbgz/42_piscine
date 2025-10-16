/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkabagoz <bkabagoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:04:07 by bkabagoz          #+#    #+#             */
/*   Updated: 2025/10/09 16:13:07 by bkabagoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	product;

	if (nb < 0)
		return (0);
	product = 1;
	while (nb > 1)
		product *= nb--;
	return (product);
}
