/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkabagoz <bkabagoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 12:59:18 by bkabagoz          #+#    #+#             */
/*   Updated: 2025/10/08 13:56:00 by bkabagoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	calc_sign(char *str, int *i)
{
	int	flag;

	*i = 0;
	flag = 1;
	while (str[*i] == '+' || str[*i] == '-' || str[*i] == ' ')
	{
		if (str[*i] == '-')
			flag *= -1;
		(*i)++;
	}
	return (flag);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	val;

	val = 0;
	i = 0;
	sign = calc_sign(str, &i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		val = (val * 10) + str[i] - '0';
		i++;
	}
	return (sign * val);
}
