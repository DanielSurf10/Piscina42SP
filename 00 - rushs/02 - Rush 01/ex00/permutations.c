/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   permutations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:47:34 by danbarbo          #+#    #+#             */
/*   Updated: 2023/08/27 18:24:28 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tuple.h"

struct s_tuple	covert_str_to_tuple(char *s)
{
	struct s_tuple	lin;

	lin.n1 = s[0] - '0';
	lin.n2 = s[1] - '0';
	lin.n3 = s[2] - '0';
	lin.n4 = s[3] - '0';
	return (lin);
}

void	swap(char *x, char *y)
{
	char	temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

void	permute(char *a, int l, int r, struct s_perm *list)
{
	int	i;

	if (l == r)
	{
		add_value(list, covert_str_to_tuple(a));
	}
	else
	{
		i = l;
		while (i <= r)
		{
			swap((a + l), (a + i));
			permute(a, l + 1, r, list);
			swap((a + l), (a + i));
			i++;
		}
	}
}
