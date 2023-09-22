/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:03:05 by danbarbo          #+#    #+#             */
/*   Updated: 2023/09/22 13:18:48 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strlcat.c"

int main()
{
	int		ret;
	char	dest[] = "Isto é ";
	char	src[] = "uma string potencialmente longa";
	char	buffer[40];

	strcpy(buffer, dest);
	ret = ft_strlcat(buffer, src, 16);
	printf("Valor retornado: %d\n", ret);
	puts(buffer);

	puts("");
	strcpy(buffer, dest);
	ret = ft_strlcat(buffer, src, 40);
	printf("Value returned: %d\n", ret);
	puts(buffer);

	return(0);
}
