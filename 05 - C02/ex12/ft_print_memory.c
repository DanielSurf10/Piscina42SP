/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:33:02 by danbarbo          #+#    #+#             */
/*   Updated: 2023/09/13 21:40:43 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(unsigned char c)
{
	unsigned int	div;
	unsigned int	mod;
	unsigned char	c_hex[2];
	char			*hex;

	hex = "0123456789abcdef";
	div = c / 16;
	mod = c % 16;
	c_hex[0] = hex[div];
	c_hex[1] = hex[mod];
	write(1, c_hex, 2);
}

void	print_adress(void *addr)
{
	int				i;
	char			addr_str[17];
	unsigned long	addr_long;
	char			*hex;

	hex = "0123456789abcdef";
	i = 15;
	addr_str[16] = '\0';
	addr_long = (unsigned long) addr;
	while (i >= 0)
	{
		addr_str[i] = hex[addr_long % 16];
		addr_long /= 16;
		i--;
	}
	write(1, addr_str, 16);
}

void	ft_putstr(unsigned char *str, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
	write(1, "\n", 1);
}

void	print_data(void **addr, unsigned int *i)
{
	unsigned char	*addr_char;

	addr_char = (unsigned char *)(*addr);
	if (*i % 16 == 0)
	{
		print_adress(*addr);
		write(1, ": ", 2);
		(*addr) += 16;
	}
	print_hex(addr_char[*i]);
	if (*i % 2 != 0)
		write(1, " ", 1);
	(*i)++;
	if (*i % 16 == 0)
		ft_putstr((unsigned char *)((*addr) - 16), 16);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	count_print;
// 	unsigned char	*addr_char;
//
// 	addr_char = (unsigned char *)(addr);
	i = 0;
	if (size % 2 != 0)
		size++;
	while (i < size)
	{
		print_data(&addr, &i);
		// if (i % 16 == 0)
		// {
		// 	print_adress(addr);
		// 	write(1, ": ", 2);
		// 	addr += 16;
		// }
		// print_hex(addr_char[i]);
		// if (i % 2 != 0)
		// 	write(1, " ", 1);
		// i++;
		// if (i % 16 == 0)
		// 	ft_putstr((unsigned char *) addr - 16, 16);
	}
	if (i % 16 != 0)
	{
		count_print = i;
		while (i % 16 != 0)
		{
			write(1, "   ", 2 + (i % 2 != 0));
			i++;
		}
		ft_putstr((unsigned char *) addr - 16, count_print % 16);
	}
	return (0);
}
