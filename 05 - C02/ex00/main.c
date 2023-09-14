/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:12:21 by danbarbo          #+#    #+#             */
/*   Updated: 2023/09/12 19:29:33 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strcpy.c"

int	main(void)
{
	char	str1[] = {"Bom dia!"};
	char	str2[] = "";

	printf("%s\n", ft_strcpy(str2, str1));

	return (0);
}
