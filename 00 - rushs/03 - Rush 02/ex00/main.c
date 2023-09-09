/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 21:27:41 by ishenriq          #+#    #+#             */
/*   Updated: 2023/09/03 21:36:49 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "presentation.h"
#include "structs.h"
#include "args.h"
#include "array_list.h"
#include "utils/utils.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int	read_file(t_array_list	*lst, t_args *args)
{
	int		fread;
	int		fseek;
	char	*line;

	fread = open(args->dict_path, O_RDONLY);
	fseek = open(args->dict_path, O_RDONLY);
	line = fread_line(fseek, fread);
	while (line != 0)
	{
		if (lst_add_from_line(lst, line) == 0)
		{
			println("Dict Error");
			return (0);
		}
		line = fread_line(fseek, fread);
	}
	close(fread);
	close(fseek);
	return (1);
}

int	main(int argc, char *argv[])
{
	int				i;
	t_array_list	*lst;
	t_args			args;
	t_array_list	*lst_to_print;

	if (!is_valid_args(argc, argv))
	{
		println("Error");
		return (0);
	}
	parse_args(&args, argc, argv);
	lst = lst_new();
	lst_to_print = lst_new();
	if (read_file(lst, &args) == 0)
		return (0);
	print_value(&args, lst, lst_to_print);
	i = 0;
	while (i < lst_to_print->length)
	{
		print(lst_to_print->arr[i].value->str);
		print(" ");
		i++;
	}
	println("");
	return (0);
}
