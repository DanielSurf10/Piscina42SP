/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:32:04 by danbarbo          #+#    #+#             */
/*   Updated: 2023/09/12 19:38:57 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_str_is_lowercase.c"

int	main(void)
{
	char	str1[] = {"BomDia"};
	char	str2[] = {"bomdia"};
	char	str3[] = {"bom dia"};
	char	str4[] = {""};

	printf("str1: %d\n", ft_str_is_lowercase(str1));
	printf("str2: %d\n", ft_str_is_lowercase(str2));
	printf("str3: %d\n", ft_str_is_lowercase(str3));
	printf("str4: %d\n", ft_str_is_lowercase(str4));

	return (0);
}
