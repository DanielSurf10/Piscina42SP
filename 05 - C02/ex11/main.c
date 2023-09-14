/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:21:03 by danbarbo          #+#    #+#             */
/*   Updated: 2023/09/13 14:24:59 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_putstr_non_printable.c"

int	main(void)
{
	char	str1[] = {"Oi\nvoce esta bem?"};
	char	str2[] = {"Bom\ndia!\tTudo Bem?"};
	str1[7] = 24;
	str2[13] = 127;

	ft_putstr_non_printable(str1);
	printf("\n");
	ft_putstr_non_printable(str2);
	printf("\n");


	return (0);
}
