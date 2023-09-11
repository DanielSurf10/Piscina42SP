/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:56:40 by danbarbo          #+#    #+#             */
/*   Updated: 2023/09/11 18:07:04 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_div_mod.c"

int	main(void)
{
	int	div = 5;
	int	mod = 2;

	printf("%d %d\n", div, mod);

	ft_div_mod(div, mod, &div, &mod);

	printf("%d %d\n", div, mod);

	return (0);
}
