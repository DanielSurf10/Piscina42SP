/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:27:10 by danbarbo          #+#    #+#             */
/*   Updated: 2023/08/23 18:01:07 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	current;
	int	i;
	int	aux;

	current = 0;
	while (current < size)
	{
		i = current + 1;
		while (i < size)
		{
			if (tab[current] > tab[i])
			{
				aux = tab[current];
				tab[current] = tab[i];
				tab[i] = aux;
			}
			i++;
		}
		current++;
	}
}
