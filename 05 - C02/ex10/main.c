/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:53:49 by danbarbo          #+#    #+#             */
/*   Updated: 2023/09/13 14:02:36 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strlcpy.c"

int	main(void)
{
	char	str1[] = {"Bom dia!"};
	char	str2[6];
	char	str3[10];
	int		num1;
	int		num2;

	num1 = ft_strlcpy(str2, str1, 6);
	num2 = ft_strlcpy(str3, str1, 10);

	printf("%d %s\n", num1,str2);
	printf("%d %s\n", num2, str3);

	return (0);
}
