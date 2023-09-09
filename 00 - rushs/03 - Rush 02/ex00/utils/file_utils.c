/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 13:01:29 by maurodri          #+#    #+#             */
/*   Updated: 2023/09/02 22:09:18 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>			// TIRAR

/*
	tenta ler uma linha
	
	se for '\n' ou ' '
		pula a linha e cotinua lendo até conseguir
	
	se quando for ler o read() retornar 0
		retorna NULL

*/
char	*fread_line(int fd_seek, int fd_read)
{
	char	c;
	int		is_eof;
	char	*line;
	int		line_size;

	line_size = 1;
	is_eof = !read(fd_seek, &c, 1);
	while (c == '\n' && !is_eof)
	{
		read(fd_read, &c, 1);
		is_eof = !read(fd_seek, &c, 1);
	}
	if (is_eof)
		return (0);
	while (c != '\n')
	{
		read(fd_seek, &c, 1);
		line_size++;
	}
	line = (char *) malloc(sizeof(char) * line_size - 1);
	read(fd_read, line, line_size);
	line[line_size - 1] = '\0';
	return (line);
}
