/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 12:33:33 by maurodri          #+#    #+#             */
/*   Updated: 2023/09/03 20:01:34 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARGS_H
# define ARGS_H
# include "structs.h"

static const char	*g_default_dictionary = "./numbers.dict";

void	parse_args(t_args *args, int size, char *argv[]);
int		is_valid_args(int size, char *argv[]);
char	*normalize_number(char *str);
#endif
