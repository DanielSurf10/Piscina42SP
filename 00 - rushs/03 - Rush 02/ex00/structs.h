/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 12:31:59 by maurodri          #+#    #+#             */
/*   Updated: 2023/09/03 13:23:30 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

typedef struct s_string
{
	char	*str;
	int		length;
}	t_string;

struct s_dictionary
{
	int	file_descriptor;
};

typedef struct s_args
{
	const char	*dict_path;
	t_string	*num;
}	t_args;

#endif
