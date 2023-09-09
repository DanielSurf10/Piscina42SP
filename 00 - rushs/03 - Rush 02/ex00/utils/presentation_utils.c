/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   presentation_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 20:00:13 by maurodri          #+#    #+#             */
/*   Updated: 2023/09/03 22:34:15 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "../array_list.h"

int	get_position(int len, int mod3)
{
	mod3 = len % 3;
	if (mod3 == 0)
		return (len - 3);
	else
	{
		return (((3 - mod3) + len) - 3);
	}
}

void	make_hundred(char *hundred, int mod, int *i, t_string *num_str)
{
	if (mod == 0)
	{
		hundred[0] = num_str->str[*i];
		hundred[1] = num_str->str[*i + 1];
		hundred[2] = num_str->str[*i + 2];
		*i += 3;
	}
	else if (mod == 1)
	{
		hundred[0] = '0';
		hundred[1] = '0';
		hundred[2] = num_str->str[*i];
		*i += 1;
	}
	else if (mod == 2)
	{
		hundred[0] = '0';
		hundred[1] = num_str->str[*i];
		hundred[2] = num_str->str[*i + 1];
		*i += 2;
	}
	hundred[3] = '\0';
}
