/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:32:04 by danbarbo          #+#    #+#             */
/*   Updated: 2023/09/12 19:39:25 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_str_is_uppercase.c"

int	main(void)
{
	char	str1[] = {"BomDia"};
	char	str2[] = {"BOMDIA"};
	char	str3[] = {"BOM DIA"};
	char	str4[] = {""};

	printf("str1: %d\n", ft_str_is_uppercase(str1));
	printf("str2: %d\n", ft_str_is_uppercase(str2));
	printf("str3: %d\n", ft_str_is_uppercase(str3));
	printf("str4: %d\n", ft_str_is_uppercase(str4));

	return (0);
}
