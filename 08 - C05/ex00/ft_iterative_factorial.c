/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:01:53 by danbarbo          #+#    #+#             */
/*   Updated: 2023/09/07 13:05:11 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	sum;

	sum = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 1)
	{
		sum = sum * nb;
		nb--;
	}
	return (sum);
}
