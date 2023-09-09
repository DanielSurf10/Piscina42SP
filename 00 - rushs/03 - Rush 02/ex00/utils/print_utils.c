/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:11:00 by maurodri          #+#    #+#             */
/*   Updated: 2023/09/03 15:14:06 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "utils.h"

void	print(char *msg)
{
	int		size;
	char	*p;

	p = msg;
	size = 0;
	while (*p != '\0')
	{
		size++;
		p++;
	}
	write(1, msg, size);
}

void	println(char *msg)
{
	print(msg);
	write(1, "\n", 1);
}
