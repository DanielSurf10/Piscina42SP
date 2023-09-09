/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tuple.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 13:59:32 by danbarbo          #+#    #+#             */
/*   Updated: 2023/08/27 17:21:20 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TUPLE_H
# define TUPLE_H

struct	s_tuple
{
	int	n1;
	int	n2;
	int	n3;
	int	n4;
};

struct	s_perm
{
	int				count;
	struct s_tuple	*list;
};

struct s_perm	*create_perm(int size);

void			delete(struct s_perm *list);

struct s_tuple	get_value_tuple(struct s_perm *list, int index);

int				compare(struct s_tuple tuple1, struct s_tuple tuple2);

void			add_value(struct s_perm *list, struct s_tuple value);

#endif
