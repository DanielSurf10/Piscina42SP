/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:02:11 by danbarbo          #+#    #+#             */
/*   Updated: 2023/09/06 17:58:17 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	long_nb;

	i = 1;
	long_nb = (long) nb;
	if (long_nb <= 0)
		return (0);
	while (i * i <= long_nb)
	{
		if (i * i == long_nb)
			return (i);
		i++;
	}
	return (0);
}
