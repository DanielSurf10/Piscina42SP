/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:42:15 by danbarbo          #+#    #+#             */
/*   Updated: 2023/09/11 17:45:35 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_swap.c"

int	main(void)
{
	int	num1 = 24;
	int	num2 = 42;

	printf("Números antes da função:  %d %d\n", num1, num2);

	ft_swap(&num1, &num2);

	printf("Números depois da função: %d %d\n", num1, num2);

	return (0);
}
