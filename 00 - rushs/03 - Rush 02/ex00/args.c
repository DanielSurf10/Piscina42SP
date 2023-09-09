/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 12:31:09 by maurodri          #+#    #+#             */
/*   Updated: 2023/09/03 22:10:41 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "array_list.h"
#include "args.h"
#include "utils/utils.h"

// assumes validated size
void	parse_args(t_args *args, int size, char *argv[])
{
	t_string	*t_num;

	t_num = malloc(sizeof(t_string));
	if (size == 2)
	{
		args->dict_path = g_default_dictionary;
		t_num->str = normalize_number(argv[1]);
		t_num->length = str_len_delim('\0', t_num->str);
		args->num = t_num;
	}
	else
	{
		args->dict_path = argv[1];
		t_num->str = normalize_number(argv[2]);
		t_num->length = str_len_delim('\0', t_num->str);
		args->num = t_num;
	}
}

int	is_valid_num(char *num)
{
	while (*num != '\0')
	{
		if (!(is_digit(*num)))
			return (0);
		num++;
	}
	return (1);
}

// TODO args validation
int	is_valid_args(int size, char *argv[])
{
	int		is_valid_size;
	int		is_valid_argv;
	char	*num;

	is_valid_size = size >= 2;
	is_valid_size &= size <= 3;
	if (!is_valid_size)
		return (0);
	if (size == 2)
		num = argv[1];
	else
		num = argv[2];
	is_valid_argv = is_valid_num(num);
	return (is_valid_argv);
}

// takes a str and applies it an atoi simmilar function resulting in an integer
char	*normalize_number(char *str)
{
	char	*num_str;
	int		index;

	index = 0;
	while ((is_space(*str) || *str == '0') && *str != '\0')
		str++;
	while (is_digit(str[index]))
		index++;
	if (index == 0)
	{
		num_str = malloc(2 * sizeof(char));
		num_str[0] = '0';
		num_str[1] = '\0';
	}
	else
	{
		num_str = malloc((index + 1) * sizeof(char));
		str_ncpy(num_str, str, index);
		num_str[index] = '\0';
	}
	return (num_str);
}
