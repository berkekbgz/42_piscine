/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkabagoz <bkabagoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 17:01:27 by bkabagoz          #+#    #+#             */
/*   Updated: 2025/10/08 16:23:24 by bkabagoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

const char	*g_hex_chars = "0123456789abcdef";

void	ft_print_byte_hex(unsigned char byte)
{
	write(1, &g_hex_chars[byte / 16], 1);
	write(1, &g_hex_chars[byte % 16], 1);
}

void	ft_print_address(void *addr)
{
	unsigned long long	val;
	char				str[16];
	int					i;

	val = (unsigned long long)addr;
	i = 15;
	while (i > -1)
	{
		str[i] = g_hex_chars[0];
		if (val != 0)
			str[i] = g_hex_chars[val % 16];
		val /= 16;
		i--;
	}
	i = 0;
	while (i < 16)
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, ": ", 2);
}

void	ft_print_hex(unsigned char *ptr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < 16)
	{
		if (i < size)
			ft_print_byte_hex(ptr[i]);
		else
			write(1, "  ", 2);
		if (i % 2)
			write(1, " ", 1);
		i++;
	}
}

void	ft_print_ascii(unsigned char *ptr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		if (ptr[i] >= 32 && ptr[i] <= 126)
			write(1, &ptr[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	chunk_size;

	if (size == 0)
		return (addr);
	chunk_size = 16;
	if (size < 16)
		chunk_size = size;
	ft_print_address(addr);
	ft_print_hex(addr, chunk_size);
	ft_print_ascii(addr, chunk_size);
	write(1, "\n", 1);
	if (size > 16)
		return (ft_print_memory((unsigned char *)addr + 16, size - 16));
	return (addr);
}
