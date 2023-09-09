/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:03:17 by danbarbo          #+#    #+#             */
/*   Updated: 2023/09/07 13:29:33 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		size_scr;
	char	*new_str;

	size_scr = 0;
	while (src[size_scr] != '\0')
		size_scr++;
	new_str = (char *) malloc(sizeof(char) * size_scr + 1);
	size_scr = 0;
	while (src[size_scr] != '\0')
	{
		new_str[size_scr] = src[size_scr];
		size_scr++;
	}
	new_str[size_scr] = '\0';
	return (new_str);
}
