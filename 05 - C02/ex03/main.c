/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:32:04 by danbarbo          #+#    #+#             */
/*   Updated: 2023/09/12 19:37:46 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_str_is_numeric.c"

int	main(void)
{
	char	str1[] = {"01254"};
	char	str2[] = {"1563a"};
	char	str3[] = {""};

	printf("str1: %d\n", ft_str_is_numeric(str1));
	printf("str2: %d\n", ft_str_is_numeric(str2));
	printf("str3: %d\n", ft_str_is_numeric(str3));

	return (0);
}
