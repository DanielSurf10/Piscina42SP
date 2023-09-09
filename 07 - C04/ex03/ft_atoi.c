/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 16:51:09 by danbarbo          #+#    #+#             */
/*   Updated: 2023/09/04 12:39:23 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char ch)
{
	return (ch == ' '
		|| ch == '\n'
		|| ch == '\r'
		|| ch == '\t'
		|| ch == '\f'
		|| ch == '\v');
}

int	is_digit(char ch)
{
	return (ch >= '0' && ch <= '9');
}

int	ft_atoi(char *str)
{
	int		i;
	int		sum;
	int		multiplier;

	i = 0;
	sum = 0;
	multiplier = 1;
	while (is_space(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			multiplier *= -1;
		i++;
	}
	while (str[i] != '\0' && is_digit((str[i])))
	{
		sum *= 10;
		sum += (str[i] - '0');
		i++;
	}
	return (sum * multiplier);
}
