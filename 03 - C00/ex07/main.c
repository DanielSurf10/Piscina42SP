/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 22:25:02 by danbarbo          #+#    #+#             */
/*   Updated: 2023/09/10 23:43:00 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_putnbr.c"

void	print_number_line(int num)
{
	ft_putnbr(num);
	printf("\n");
}

int	main()
{
	print_number_line(0);
	print_number_line(100);
	print_number_line(524);
	print_number_line(-524);
	print_number_line(2147483647);
	print_number_line(-2147483648);

	return (0);
}
