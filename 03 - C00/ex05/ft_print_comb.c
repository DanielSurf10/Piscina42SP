/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:49:45 by danbarbo          #+#    #+#             */
/*   Updated: 2023/08/23 18:52:11 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnumber(int a, int b, int c)
{
	a += '0';
	b += '0';
	c += '0';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	num1;
	int	num2;
	int	num3;

	num1 = 0;
	num2 = 1;
	num3 = 2;
	while (num1 <= 7)
	{
		while (num2 <= 8)
		{
			while (num3 <= 9)
			{
				ft_putnumber(num1, num2, num3);
				if (num1 + num2 + num3 < 24)
					write(1, ", ", 2);
				num3++;
			}
			num2++;
			num3 = num2 + 1;
		}
		num1++;
		num2 = num1;
	}
}
