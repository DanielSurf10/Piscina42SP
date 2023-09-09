/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 12:48:30 by maurodri          #+#    #+#             */
/*   Updated: 2023/09/03 22:31:05 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# include "../structs.h"
# include "../array_list.h"

// char_utils.c
int		is_space(char ch);
int		is_digit(char ch);
// char_utils.c

// string_utils.c
void	str_cpy(char *dest, char *src);
void	str_ncpy(char *dest, char *src, int n);
int		str_len_delim(char delim, char *str);
int		str_ncmp(char *s1, char *s2, unsigned int n);
// string_utils.c

// file_utils.c
char	*fread_line(int fd_seek, int fd_read);
// file_utils.c

// print_utils.c
void	print(char *msg);
void	println(char *msg);
// print_utils.c

// presentation_utils.c
int		get_position(int len, int mod3);
void	make_hundred(char *hundred, int mod, int *i, t_string *num_str);
// presentation_utils.c
#endif
