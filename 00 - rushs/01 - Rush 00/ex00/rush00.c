/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:21:59 by danbarbo          #+#    #+#             */
/*   Updated: 2023/08/20 17:17:23 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_table(int x, int y)
{
	char	line;
	char	column;

	line = 1;
	column = 1;
	while (line != y + 1)
	{
		if ((line == 1 && column == 1)
			|| (line == y && column == x && x != 1 && y != 1))
			ft_putchar('o');
		else if ((line == 1 && column == x) || (line == y && column == 1))
			ft_putchar('o');
		else if (line == 1 || line == y)
			ft_putchar('-');
		else if (column == 1 || column == x)
			ft_putchar('|');
		else
			ft_putchar(' ');
		if (++column > x)
		{
			column = 1;
			line++;
			ft_putchar('\n');
		}
	}
}

void	rush(int x, int y)
{
	if (x < 1 || y < 1)
		return ;
	else
		print_table(x, y);
}
