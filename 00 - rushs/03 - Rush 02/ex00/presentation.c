/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   presentation.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 12:28:40 by maurodri          #+#    #+#             */
/*   Updated: 2023/09/03 22:34:01 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "presentation.h"
#include "args.h"
#include "array_list.h"
#include "utils/utils.h"
#include <stdlib.h>

void	print_above_hundred(
			int pos, char str[4], t_array_list *lst, t_array_list *acc)
{
	char		*key;
	int			i;
	t_string	*num_to_print;
	t_entry		pair;

	print_hundred(str, lst, acc);
	if (pos >= 3)
	{
		key = malloc(pos + 2 * sizeof(char));
		key[0] = '1';
		i = 1;
		while (i <= pos)
			key[i++] = '0';
		key[i] = '\0';
		num_to_print = lst_get_value(lst, key);
		pair.value = num_to_print;
		lst_add(acc, &pair);
		free(key);
	}
}

void	print_hundred(char str[4], t_array_list *lst, t_array_list *acc)
{
	char		key[2];
	t_string	*num_to_print;
	t_entry		pair;

	if (str[0] == '0')
	{
		print_tenths(str, lst, acc);
	}
	else
	{
		key[0] = str[0];
		key[1] = '\0';
		num_to_print = lst_get_value(lst, key);
		pair.value = num_to_print;
		lst_add(acc, &pair);
		pair.value = lst_get_value(lst, "100");
		lst_add(acc, &pair);
		print_tenths(str, lst, acc);
	}
}

void	print_tenths(char str[4], t_array_list *lst, t_array_list *acc)
{
	t_string	*num_to_print;
	t_entry		pair;
	char		tenth_key[3];

	if (str[1] == '0')
	{
		print_unity(str, lst, acc);
	}
	else if (str[1] == '1')
	{
		num_to_print = lst_get_value(lst, str + 1);
		pair.value = num_to_print;
		lst_add(acc, &pair);
	}
	else
	{
		tenth_key[0] = str[1];
		tenth_key[1] = '0';
		tenth_key[2] = '\0';
		num_to_print = lst_get_value(lst, tenth_key);
		pair.value = num_to_print;
		lst_add(acc, &pair);
		print_unity(str, lst, acc);
	}
}

void	print_unity(char str[4], t_array_list *lst, t_array_list *acc)
{
	char		*digit;
	t_string	*num_to_print;
	t_entry		pair;

	digit = &str[2];
	if (str_ncmp(digit, "0", 1) != 0)
	{
		num_to_print = lst_get_value(lst, digit);
		pair.value = num_to_print;
		lst_add(acc, &pair);
	}
}

void	print_value(t_args *args, t_array_list *lst, t_array_list *acc)
{
	t_entry		pair;
	char		str[3];
	int			pos;
	int			i;
	int			mod;

	mod = args->num->length % 3;
	if (str_ncmp(args->num->str, "0", args->num->length) == 0)
	{
		pair.value = lst_get_value(lst, "0");
		lst_add(acc, &pair);
	}
	else
	{
		i = 0;
		while (i < args->num->length)
		{
			pos = get_position(args->num->length - i, mod);
			make_hundred(str, mod, &i, args->num);
			print_above_hundred(pos, str, lst, acc);
			mod = 0;
		}
	}
}
