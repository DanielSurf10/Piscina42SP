/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_list.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julidos- <julidos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 16:41:49 by maurodri          #+#    #+#             */
/*   Updated: 2023/09/03 19:29:38 by julidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_LIST_H
# define ARRAY_LIST_H
# include "structs.h"

typedef struct s_entry
{
	t_string	*key;
	t_string	*value;
}	t_entry;

typedef struct s_array_list
{
	t_entry	*arr;
	int		length;
	int		capacity;
}	t_array_list;

t_array_list	*lst_new(void);
void			lst_add(t_array_list *lst, t_entry *entry);
int				lst_add_from_line(t_array_list *lst, char *line);
t_string		*lst_get_value(t_array_list *lst, char *key);

#endif
