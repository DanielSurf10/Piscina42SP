/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:12:21 by danbarbo          #+#    #+#             */
/*   Updated: 2023/09/12 19:31:46 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strncpy.c"

int	main(void)
{
	char	str1[] = {"Bom dia!"};
	char	str2[] = {"Boa noite!"};

	printf("%s\n", ft_strncpy(str2, str1, 5));

	return (0);
}
