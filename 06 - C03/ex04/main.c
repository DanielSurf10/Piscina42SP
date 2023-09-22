/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:36:51 by danbarbo          #+#    #+#             */
/*   Updated: 2023/09/22 14:29:43 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strstr.c"

int	main(void)
{
	char	str1[] = {"Bom dia ana, tudo bem?"};
	char	str2[] = {"ana"};
	char	str3[] = {"Ana"};
	char	str4[] = {""};

	char	*found = ft_strstr(str1, str2);
	char	*not_found = ft_strstr(str1, str3);
	char	*full = ft_strstr(str1, str4);

	printf("%s\n", found);
	printf("%s\n", not_found);
	printf("%s\n", full);

	return (0);
}
