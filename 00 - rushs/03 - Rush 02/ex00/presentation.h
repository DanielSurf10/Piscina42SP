/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   presentation.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 12:42:27 by maurodri          #+#    #+#             */
/*   Updated: 2023/09/03 22:11:28 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESENTATION_H
# define PRESENTATION_H
# include "array_list.h"
# include "structs.h"

void	print_above_hundred(int pos,
			char str[4], t_array_list *lst, t_array_list *acc);
void	print_hundred(char str[4], t_array_list *lst, t_array_list *acc);
void	print_tenths(char str[4], t_array_list *lst, t_array_list *acc);
void	print_unity(char str[4], t_array_list *lst, t_array_list *acc);
void	print_value(t_args *args, t_array_list *lst, t_array_list *acc);

#endif
