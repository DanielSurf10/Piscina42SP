/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 20:23:58 by danbarbo          #+#    #+#             */
/*   Updated: 2023/08/27 21:32:56 by nsilva           ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdlib.h>
#include    "table.h"
#include    "tuple.h"
#include    "permutations.h"

void	get_args(char *argc, struct s_tuple *matrix)
{
	int				size;
	int				i;

	size = 0;
	i = 0;
	while (size < 4)
	{
		matrix->n1 = argc[size * 4];
		matrix->n2 = argc[size * 4 + 2];
		matrix->n2 = argc[size * 4 + 4];
		matrix->n2 = argc[size * 4 + 8];
		size++;
		matrix++;
	}
}

void	put_int(int nb)
{
	nb = nb + 48;
	write (1, &nb, 1);
}

void	get_input(int size, char **argv, int matrix[size][size])
{
	int		i;
	int		j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			matrix[i][j] = argv[1][2 * (size * i + j)] - '0';
			j++;
		}
		i++;
	}
}

void	check_input_range(int *solution, int size, int matrix[size][size])
{
	int		i;
	int		j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (matrix[i][j] < 1 || matrix[i][j] > 4)
			{
				*solution = 0;
				break ;
			}
			j++;
		}
		i++;
	}
}

void	check_input_repetition(int *solution, int size, int matrix[size][size])
{
	int	i;
	int	j;
	int	rpt;
	int	view;

	i = 0;
	while (i < size)
	{
		view = 2;
		while (view <= size)
		{
			j = 0;
			rpt = 0;
			while (j < size)
			{
				if (matrix[i][j] == view)
				rpt++;
				j++;
			}
			if (rpt > size + 1 - view)
			{
				*solution = 2;
				break ;
			}
			view++;
		}
		i++;
	}
}

void	check_input_total (int *solution, int size, int matrix[size][size])
{
	int		total_sum[2][size];
	int		i;
	int		j;
	int		k;

    i	=	0;
    k	=	0;
	while (i < 2)
	{
		j	=	0;
        while (j < size)
        {
			total_sum[i][j] = matrix[k][j] + matrix[k+1][j];
			j++;
		}
		i++;
		k += 2;
		}
	i	=	0;
	while (i < 2)
	{
		j	=	0;
        while (j < size)
        {
            if (total_sum[i][j] < 3 || total_sum[i][j] > 5)
            {
                *solution = 3;
                break;
            }
            j++;
        }
        i++;
    }
}

void populate(int *solution, int size, int index, int type, int matrix[size][size])
{
    int count;
    int var;

    var = 0;
    if (type == 1 || type == 3)
        var = 1;
    count = 0;
    while (count < 4 && (type == 0 || type == 1))
    {
        if (matrix[count][index] != 0  &&
            matrix[count][index] != (1 - var)*(count + 1) + (var)*(4 - count))
        {
            *solution = 4;
            break;
        }
        matrix[count][index] = (1 - var)*(count + 1) + (var)*(4 - count);
        count++;
    }
    count = 0;
    while (count < 4 && (type == 2 || type == 3))
    {
        if (matrix[index][count] != 0 &&
            matrix[index][count] != (1 - var)*(count + 1) + (var)*(4 - count))
        {
            *solution = 4;
            break;
        }
        matrix[index][count] = (1 - var)*(count + 1) + (var)*(4 - count);
        count++;
    }
}

void loop_pop(int *solution, int size, int input[size][size], int output[size][size])
{
    int i;
    int j;

    i = 0;
    while (i < size)
    {
        j = 0;
        while (j < size)
        {
            if (input[i][j] == 4)
                populate(solution, size, j, i, output);
            j++;
        }
        i++;
    }
}

void print_matrix(int row, int col, int matrix[4][4])
{
    int i;
    int j;

    i = 0;
    while (i < row)
    {
        j = 0;
        while (j < col)
        {
            put_int(matrix[i][j]);
            if (j < col -1)
                write(1, " ", 1);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
    write(1, "\n", 1);
}

int main(int argc, char **argv) {
    int (*matrix_input)[4];
    matrix_input = (int (*)[4])malloc(sizeof(*matrix_input) * 4);

    int (*matrix_output)[4];
    matrix_output = (int (*)[4])malloc(sizeof(*matrix_output) * 4);

    int size = 4;
    int solution = 1;
    
    int matirx[4][4];

    if (argc != 2)
    {
        write(1, "Wrong number of arguments\n", 26);
        return (0);
    }

    int i = 0;
    int j;

    get_input(size, argv, matrix_input);

    check_input_range(&solution, size, matrix_input);

    if (solution == 1)
        check_input_repetition(&solution, size, matrix_input);

    if (solution ==1)
        check_input_total(&solution, size, matrix_input);
    
    print_matrix(4, 4, matrix_input);

    if (solution == 1)
        loop_pop(&solution, size, matrix_input, matrix_output);

    if (solution == 0)
        write(1, "Input out of range\n", 19);
    else if (solution == 2)
        write(1, "Repettion of numbers!\n", 22);
    else if (solution ==3)
        write(1, "Total sum of inputs < 3 or > 5\n", 31);
    else if (solution == 4)
        write(1, "Overwrite of lines!\n", 20);

    print_matrix(4, 4, matrix_output);

    struct s_tuple *table = create_table(4);

	get_args(argv[1], table);

    struct s_perm   *permutations = create_perm(4);
    struct s_tuple	ret;
    char a[] = {"1234"};

    permute(a, 0, 3, permutations);

	delete_table(table);
    delete(permutations);

    return 0;
}
