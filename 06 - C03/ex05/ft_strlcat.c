/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:26:55 by danbarbo          #+#    #+#             */
/*   Updated: 2023/09/22 13:04:09 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	size_dest;
	unsigned int	size_src;

	size_dest = 0;
	size_src = 0;
	while (dest[size_dest] != '\0')
		size_dest++;
	while (src[size_src] != '\0' && size_dest + size_src < size - 1)
	{
		dest[size_dest + size_src] = src[size_src];
		size_src++;
	}
	dest[size_dest + size_src] = '\0';
	while (src[size_src] != '\0')
		size_src++;
	return (size_dest + size_src);
}
