/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:25:00 by danbarbo          #+#    #+#             */
/*   Updated: 2023/09/22 13:36:17 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strncat.c"

int	main(void)
{
	char	dest[10] = {"Boa "};
	char	scr[] = {"Noite"};

	printf("%s\n", ft_strncat(dest, scr, 3));


	return (0);
}
