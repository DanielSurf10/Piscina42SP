/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:52:58 by danbarbo          #+#    #+#             */
/*   Updated: 2023/09/13 22:20:16 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_print_memory.c"

int	main(void)
{
	char *a = malloc(sizeof(char) * 10000);
	unsigned char c = 0;
	for (int i = 0; i < 10000; i++)
	{
		a[i] = c;
		c++;
	}

	ft_print_memory(a, 10000);

	free(a);

	return (0);
}
