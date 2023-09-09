/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 20:20:37 by danbarbo          #+#    #+#             */
/*   Updated: 2023/09/05 20:24:33 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i_str;
	int	i_args;

	i_args = argc - 1;
	if (argc < 2)
		return (0);
	while (i_args > 0)
	{
		i_str = 0;
		while (argv[i_args][i_str] != '\0')
		{
			write(1, &argv[i_args][i_str], 1);
			i_str++;
		}
		write(1, "\n", 1);
		i_args--;
	}
	return (0);
}
