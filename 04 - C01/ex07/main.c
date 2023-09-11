/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:22:17 by danbarbo          #+#    #+#             */
/*   Updated: 2023/09/11 18:26:09 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_rev_int_tab.c"

int	main(void)
{
	int	tab1[] = {1, 2, 3, 4, 5};
	int	tab2[] = {1, 4, 3, 2, 5};

	ft_rev_int_tab(tab1, 5);
	ft_rev_int_tab(tab2, 5);

	for (int i = 0; i < 5; i++)
		printf("%d ", tab1[i]);

	printf("\n");

	for (int i = 0; i < 5; i++)
		printf("%d ", tab2[i]);

	printf("\n");

	return (0);
}
