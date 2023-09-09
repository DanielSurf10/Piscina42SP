/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:03:14 by danbarbo          #+#    #+#             */
/*   Updated: 2023/08/23 18:56:53 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	n;

	n = nb;
	if (n < 10)
		ft_putchar(n + '0');
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int	pow10(int exponent)
{
	int	num;

	num = 10;
	while (exponent != 1)
	{
		num *= 10;
		exponent--;
	}
	return (num);
}

int	get_firt_num(int n)
{
	int	first;
	int	mod;

	if (n == 1)
		return (0);
	first = 1;
	while (n-- > 1)
	{
		mod = first % 10;
		first *= 10 + mod + 1;
	}
	return (first);
}

void	ft_print_combn(int n)
{
	int	num;
	int	mult;

	num = get_firt_num(n);
}
