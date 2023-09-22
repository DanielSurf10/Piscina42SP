/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:19:09 by danbarbo          #+#    #+#             */
/*   Updated: 2023/09/22 13:24:39 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strncmp.c"

int	main(void)
{
	char	str1[] = {"Bom dia!"};
	char	str2[] = {"Bom Dia"};
	char	str3[] = {"Banana"};
	char	str4[] = {""};

	printf("%d\n", ft_strncmp(str1, str2, 3));
	printf("%d\n", ft_strncmp(str1, str3, 7));
	printf("%d\n", ft_strncmp(str1, str4, 5));


	return (0);
}
