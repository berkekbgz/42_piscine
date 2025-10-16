/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkabagoz <bkabagoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:56:44 by bkabagoz          #+#    #+#             */
/*   Updated: 2025/10/08 18:33:57 by bkabagoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	validate_base(char *base, unsigned int *base_size)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	*base_size = i;
	return (i > 1);
}

void	print_recursive(unsigned int nbr, char *base, unsigned int base_size)
{
	if (nbr >= base_size)
		print_recursive(nbr / base_size, base, base_size);
	write(1, &base[nbr % base_size], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	base_size;
	unsigned int	n;

	if (!validate_base(base, &base_size))
		return ;
	if (nbr < 0)
	{
		n = (unsigned int)nbr * -1;
		write(1, "-", 1);
	}
	else
		n = (unsigned int)nbr;
	print_recursive(n, base, base_size);
}
