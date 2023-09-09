/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 13:35:17 by danbarbo          #+#    #+#             */
/*   Updated: 2023/09/04 12:26:11 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*first;
	int		i;
	int		i_str;

	first = str;
	i = 0;
	i_str = 0;
	while (str[i_str] != '\0' && to_find[i] != '\0')
	{
		if (str[i_str] == to_find[i])
		{
			if (first == 0)
				first = &str[i_str];
			i++;
		}
		else
		{
			i = 0;
			first = 0;
		}
		i_str++;
	}
	if (to_find[i] == '\0')
		return (first);
	return (0);
}
