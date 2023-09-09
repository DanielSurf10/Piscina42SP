/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 17:16:03 by danbarbo          #+#    #+#             */
/*   Updated: 2023/08/28 17:13:58 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_alpha(char c)
{
	if (!(c >= 'A' && c <= 'Z')
		&& !(c >= 'a' && c <= 'z'))
		return (0);
	return (1);
}

int	ft_char_is_numeric(char c)
{
	if (!(c >= '0' && c <= '9'))
		return (0);
	return (1);
}

char	upper(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

char	lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && ft_char_is_alpha(str[i]))
			str[i] = upper(str[i]);
		else if (!ft_char_is_alpha(str[i - 1]) && ft_char_is_alpha(str[i])
			&& !ft_char_is_numeric(str[i - 1]))
			str[i] = upper(str[i]);
		else
			str[i] = lower(str[i]);
		i++;
	}
	return (str);
}
