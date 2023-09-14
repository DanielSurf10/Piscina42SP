/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:32:04 by danbarbo          #+#    #+#             */
/*   Updated: 2023/09/12 19:41:11 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_str_is_printable.c"

int	main(void)
{
	char	str1[] = {"Bom diaa! Tudo bem?"};
	char	str2[] = {"Gosto de bananas. 15437"};
	char	str3[] = {32, 54, 25, 68};
	char	str4[] = {""};

	printf("str1: %d\n", ft_str_is_printable(str1));
	printf("str2: %d\n", ft_str_is_printable(str2));
	printf("str3: %d\n", ft_str_is_printable(str3));
	printf("str4: %d\n", ft_str_is_printable(str4));

	return (0);
}
