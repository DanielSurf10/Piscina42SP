/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tuple.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 13:58:39 by danbarbo          #+#    #+#             */
/*   Updated: 2023/08/27 17:56:08 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tuple.h"
#include <stdlib.h>

struct s_perm	*create_perm(int size)
{
	int					size_perm;
	struct s_tuple		*list;
	struct s_perm		*perm;

	size_perm = size;
	while (--size > 0)
		size_perm *= size;
	perm = (struct s_perm *) malloc(sizeof(struct s_perm));
	list = (struct s_tuple *) malloc(sizeof(struct s_tuple) * size_perm);
	perm->count = 0;
	perm->list = list;
	return (perm);
}

void	delete(struct s_perm *list)
{
	free(list->list);
	free(list);
}

struct s_tuple	get_value_tuple(struct s_perm *list, int index)
{
	struct s_tuple	item;
	struct s_tuple	*tuple_list;

	tuple_list = list->list;
	item = tuple_list[index];
	return (item);
}

int	compare(struct s_tuple tuple1, struct s_tuple tuple2)
{
	if (tuple1.n1 == tuple2.n1 && tuple1.n2 == tuple2.n2
		&& tuple1.n3 == tuple2.n3 && tuple1.n4 == tuple2.n4)
		return (1);
	return (0);
}

void	add_value(struct s_perm *list, struct s_tuple value)
{
	struct s_tuple	*tuple_list;

	tuple_list = list->list;
	tuple_list[list->count] = value;
	list->count++;
}
