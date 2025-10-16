/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkabagoz <bkabagoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 15:19:02 by bkabagoz          #+#    #+#             */
/*   Updated: 2025/10/01 15:26:37 by bkabagoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	is_all_numeric;

	i = 0;
	is_all_numeric = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
		{
			is_all_numeric = 0;
		}
		i++;
	}
	return (is_all_numeric);
}
