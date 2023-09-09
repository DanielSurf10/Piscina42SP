/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 13:58:37 by danbarbo          #+#    #+#             */
/*   Updated: 2023/08/27 19:46:47 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "table.h"
#include "tuple.h"
#include <stdlib.h>

struct s_tuple	*create_table(int size)
{
	struct s_tuple	*list;

	list = (struct s_tuple *) malloc(sizeof(struct s_tuple) * size * size);
	return (list);
}

void	delete_table(struct s_tuple *list)
{
	free(list);
}

int	get_value(int *list, int x, int y)
{
	int	item;

	item = list[x + y * 4];
	return (item);
}

void	set_value(int *list, int x, int y, int value)
{
	list[x + y * 4] = value;
}

int	compare_line(int *list, int line_index, struct s_tuple line)
{
	struct s_tuple	lin;
	int				result;

	lin.n1 = get_value(list, 0, line_index);
	lin.n2 = get_value(list, 1, line_index);
	lin.n3 = get_value(list, 2, line_index);
	lin.n4 = get_value(list, 3, line_index);
	result = compare(lin, line);
	return (result);
}
