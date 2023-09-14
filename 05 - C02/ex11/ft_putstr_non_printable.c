/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:09:44 by danbarbo          #+#    #+#             */
/*   Updated: 2023/09/13 14:32:38 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

void	putchar_non_printable(char c)
{
	int			div;
	int			mod;
	const char	*hex;

	hex = "0123456789abcdef";
	div = c / 16;
	mod = c % 16;
	write(1, "\\", 1);
	write(1, &hex[div], 1);
	write(1, &hex[mod], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_str_is_printable(str[i]))
			write(1, &str[i], 1);
		else
			putchar_non_printable(str[i]);
		i++;
	}
}
