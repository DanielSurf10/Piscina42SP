/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:25:00 by danbarbo          #+#    #+#             */
/*   Updated: 2023/09/22 13:35:09 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strcat.c"

int	main(void)
{
	char	dest[10] = {"Bom "};
	char	scr[] = {"Dia"};

	printf("%s\n", ft_strcat(dest, scr));


	return (0);
}
