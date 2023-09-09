/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:12:12 by danbarbo          #+#    #+#             */
/*   Updated: 2023/09/05 19:15:39 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	sum;

	sum = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		sum = sum * nb;
		power--;
	}
	return (sum);
}
