/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 12:50:28 by maurodri          #+#    #+#             */
/*   Updated: 2023/09/03 22:12:12 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	str_len_delim(char delim, char *str)
{
	int	len;

	len = 0;
	while (*str != delim)
	{
		if (*str == '\0')
			return (-1);
		len++;
		str++;
	}
	return (len);
}

void	str_cpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}

void	str_ncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (i < n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
}

int	str_ncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 != '\0' && *s2 != '\0' && n > 0)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		n--;
	}
	if (n <= 0)
		return (0);
	else
		return (*s1 - *s2);
}
