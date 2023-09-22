/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:19:09 by danbarbo          #+#    #+#             */
/*   Updated: 2023/09/22 13:23:03 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strcmp.c"

int	main(void)
{
	char	str1[] = {"Bom dia!"};
	char	str2[] = {"Bom dia!"};
	char	str3[] = {"Banana"};
	char	str4[] = {""};

	printf("%d\n", ft_strcmp(str1, str2));
	printf("%d\n", ft_strcmp(str1, str3));
	printf("%d\n", ft_strcmp(str1, str4));


	return (0);
}
