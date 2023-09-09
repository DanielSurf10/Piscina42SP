/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 13:29:34 by danbarbo          #+#    #+#             */
/*   Updated: 2023/09/04 12:17:38 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				size_dest;

	i = 0;
	size_dest = 0;
	while (dest[size_dest] != '\0')
		size_dest++;
	while (i < nb && src[i] != '\0')
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	return (dest);
}

// Bom \0
// dia, tudo bem?\0
