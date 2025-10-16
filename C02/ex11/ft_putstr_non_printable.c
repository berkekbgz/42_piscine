/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkabagoz <bkabagoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:05:32 by bkabagoz          #+#    #+#             */
/*   Updated: 2025/10/08 19:27:37 by bkabagoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

const char	*g_hex_chars = "0123456789abcdef";

void	print_unprintable(unsigned char uc)
{
	write(1, "\\", 1);
	write(1, &g_hex_chars[uc / 16], 1);
	write(1, &g_hex_chars[uc % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	uc;

	i = 0;
	while (str[i])
	{
		uc = (unsigned char)str[i];
		if (uc < 32 || uc > 126)
			print_unprintable(str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}
