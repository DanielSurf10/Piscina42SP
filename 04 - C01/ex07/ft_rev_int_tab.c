/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:15:16 by danbarbo          #+#    #+#             */
/*   Updated: 2023/08/23 17:22:27 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	times;
	int	aux;

	count = 0;
	times = size / 2;
	size--;
	while (times-- > 0)
	{
		aux = tab[count];
		tab[count] = tab[size];
		tab[size] = aux;
		count++;
		size--;
	}
}
