/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:33:28 by danbarbo          #+#    #+#             */
/*   Updated: 2023/09/11 14:01:55 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_ultimate_ft.c"

int	main(void)
{
	int	num = 56;
	int	*P_num = &num;
	int	**P2_num = &P_num;
	int	***P3_num = &P2_num;
	int	****P4_num = &P3_num;
	int	*****P5_num = &P4_num;
	int	******P6_num = &P5_num;
	int	*******P7_num = &P6_num;
	int	********P8_num = &P7_num;
	int	*********P9_num = &P8_num;

	printf("Número antes da função:  %d\n", num);

	ft_ultimate_ft(P9_num);

	printf("Número depois da função: %d\n", num);

	return (0);
}
