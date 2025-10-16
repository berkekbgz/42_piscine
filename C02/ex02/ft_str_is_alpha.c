/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkabagoz <bkabagoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:44:50 by bkabagoz          #+#    #+#             */
/*   Updated: 2025/10/01 19:20:28 by bkabagoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	is_all_alphabetical;

	i = 0;
	is_all_alphabetical = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] <= 122) && !(str[i] >= 65 && str[i] <= 90))
		{
			is_all_alphabetical = 0;
			break ;
		}
		i++;
	}
	return (is_all_alphabetical);
}
