/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkabagoz <bkabagoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 10:41:20 by bkabagoz          #+#    #+#             */
/*   Updated: 2025/10/08 12:14:14 by bkabagoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		find_len;

	find_len = ft_strlen(to_find);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (j <= find_len)
		{
			if (j == find_len)
				return (str + i);
			else if (str[i + j] != to_find[j])
				break ;
			j++;
		}
		i++;
	}
	return (0);
}
