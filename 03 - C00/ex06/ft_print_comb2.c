/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:10:12 by danbarbo          #+#    #+#             */
/*   Updated: 2023/09/10 23:42:10 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnumber(int num1, int num2)
{
	ft_putchar('0' + num1 / 10);
	ft_putchar('0' + num1 % 10);
	ft_putchar(' ');
	ft_putchar('0' + num2 / 10);
	ft_putchar('0' + num2 % 10);
	if (num1 != 98)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			ft_putnumber(num1, num2);
			num2++;
		}
		num1++;
		num2 = num1;
	}
}
