/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:19:52 by danbarbo          #+#    #+#             */
/*   Updated: 2023/09/11 13:26:34 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_ft.c"

int	main(void)
{
	int	num;

	num = 21;
	printf("Número antes da função:  %d\n", num);

	ft_ft(&num);

	printf("Número depois da função: %d\n", num);

	return (0);
}
