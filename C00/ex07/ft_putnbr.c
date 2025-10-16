/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkabagoz <bkabagoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 15:14:01 by bkabagoz          #+#    #+#             */
/*   Updated: 2025/09/26 18:52:47 by bkabagoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define MAX_DIGIT_COUNT 10

int	ft_check_min_int(int value)
{
	if (value == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (1);
	}
	return (0);
}

void	ft_check_negative(int *value, int *is_negative)
{
	if (*value < 0)
	{
		*value *= -1;
		*is_negative = 1;
	}
}

void	ft_putnbr(int nb)
{
	char	digits[MAX_DIGIT_COUNT];
	int		i;
	int		is_negative;

	if (ft_check_min_int(nb))
		return ;
	is_negative = 0;
	ft_check_negative(&nb, &is_negative);
	i = MAX_DIGIT_COUNT - 1;
	while (i >= 0)
	{
		digits[i] = (char)(nb % 10) + '0';
		if (nb == 0)
			digits[i] = 0x0;
		nb /= 10;
		i--;
	}
	if (is_negative)
		write(1, "-", 1);
	i = 0;
	while (i < MAX_DIGIT_COUNT + 1)
	{
		write(1, &digits[i], 1);
		i++;
	}
}
