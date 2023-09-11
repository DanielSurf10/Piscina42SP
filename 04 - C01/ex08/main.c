/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:10:33 by danbarbo          #+#    #+#             */
/*   Updated: 2023/09/11 18:28:58 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_sort_int_tab.c"

int	main(void)
{
	int	tab[] = {2, 5, 3, 1, 9};

	ft_sort_int_tab(tab, 5);

	for (int i = 0; i < 5; i++)
		printf("%d ", tab[i]);

	printf("\n");

	return (0);
}
