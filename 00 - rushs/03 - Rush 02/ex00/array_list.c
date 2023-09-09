/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julidos- <julidos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 16:46:56 by maurodri          #+#    #+#             */
/*   Updated: 2023/09/03 20:50:24 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "args.h"
#include "array_list.h"
#include "utils/utils.h"

t_array_list	*lst_new(void)
{
	t_array_list	*arr_lst;
	int				initial_capacity;

	initial_capacity = 10;
	arr_lst = malloc(sizeof(t_array_list));
	arr_lst->capacity = initial_capacity;
	arr_lst->arr = malloc(initial_capacity * sizeof(t_entry));
	arr_lst->length = 0;
	return (arr_lst);
}

void	copy_entries(t_entry *dest, t_entry *src, unsigned int src_length)
{
	unsigned int	i;

	i = 0;
	while (i < src_length)
	{
		dest[i] = src[i];
		i++;
	}
}

void	lst_add(t_array_list *lst, t_entry *entry)
{
	t_entry	*arr;

	arr = lst->arr;
	if (lst->length == lst->capacity)
	{
		lst->capacity *= 2;
		lst->arr = malloc(lst->capacity * sizeof(t_entry));
		copy_entries(lst->arr, arr, lst->length);
	}
	lst->arr[lst->length] = *entry;
	lst->length++;
}

/*
	Adds an allocated string with key:value separated by ':' as an
	t_entry to lst and then calls free on line.
	Returns 1 if succeded and 0 if no ':' was found on line;
 */
int	lst_add_from_line(t_array_list *lst, char *line)
{
	t_string	*key;
	t_string	*value;
	t_entry		*entry;
	int			i;

	i = 0;
	key = malloc(sizeof(t_string));
	value = malloc(sizeof(t_string));
	entry = malloc(sizeof(t_entry));
	key->length = str_len_delim(':', line);
	while (is_space(line[key->length + 1 + i]))
		i++;
	value->length = str_len_delim('\0', line + key->length + 1 + i);
	if (key->length == -1)
		return (0);
	line[key->length] = '\0';
	key->str = normalize_number(line);
	value->str = malloc(sizeof(char) * value->length + 1);
	str_cpy(value->str, line + key->length + 1 + i);
	entry->key = key;
	entry->value = value;
	lst_add(lst, entry);
	free(line);
	return (1);
}

/*
	Gets a value from the list by comparing entry key with key argument
 */
t_string	*lst_get_value(t_array_list *lst, char *key)
{
	int			i;
	int			key_len;
	int			is_equal;
	t_string	*current_key;

	i = 0;
	current_key = lst->arr[i].key;
	while (i < lst-> length)
	{
		current_key = lst->arr[i].key;
		key_len = str_len_delim('\0', key);
		is_equal = 0 == str_ncmp(key, current_key->str, key_len);
		if (is_equal)
		{
			return (lst->arr[i].value);
		}
		i++;
	}
	return ((t_string *) 0);
}
