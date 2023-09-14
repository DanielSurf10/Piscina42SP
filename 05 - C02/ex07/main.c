/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:41:32 by danbarbo          #+#    #+#             */
/*   Updated: 2023/09/12 19:43:52 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strupcase.c"

int	main(void)
{
	char	str1[] = {"Bom dia!"};
	char	str2[] = {"banana"};
	char	str3[] = {"BeRInGelA"};

	printf("%s\n", ft_strupcase(str1));
	printf("%s\n", ft_strupcase(str2));
	printf("%s\n", ft_strupcase(str3));

	return (0);
}
