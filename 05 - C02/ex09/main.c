/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:44:55 by danbarbo          #+#    #+#             */
/*   Updated: 2023/09/12 19:46:36 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strcapitalize.c"

int	main(void)
{
	char	str1[] = {"oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um"};
	char	str2[] = {"Gosto-de-banana!"};

	printf("%s\n", ft_strcapitalize(str1));
	printf("%s\n", ft_strcapitalize(str2));

	return (0);
}
