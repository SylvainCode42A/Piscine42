/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_combinaisons.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slidriss <slidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 22:34:47 by slidriss          #+#    #+#             */
/*   Updated: 2025/09/15 17:31:20 by slidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	get_possibilities_24(char table[24][4])
{
	int					i;
	int					j;
	static const char	matrix[24][4] = {
	{1, 2, 3, 4}, {1, 2, 4, 3}, {1, 3, 2, 4}, {1, 3, 4, 2},
	{1, 4, 2, 3}, {1, 4, 3, 2}, {2, 1, 3, 4}, {2, 1, 4, 3},
	{2, 3, 1, 4}, {2, 3, 4, 1}, {2, 4, 1, 3}, {2, 4, 3, 1},
	{3, 1, 2, 4}, {3, 1, 4, 2}, {3, 2, 1, 4}, {3, 2, 4, 1},
	{3, 4, 1, 2}, {3, 4, 2, 1}, {4, 1, 2, 3}, {4, 1, 3, 2},
	{4, 2, 1, 3}, {4, 2, 3, 1}, {4, 3, 1, 2}, {4, 3, 2, 1}
	};

	i = 0;
	j = 0;
	while (i < 24)
	{
		j = 0;
		while (j < 4)
		{
			table[i][j] = matrix[i][j];
			j++;
		}
		i++;
	}
}

int	is_compatible(char a[4], char b[4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (a[i] == b[i])
			return (0);
		i++;
	}
	return (1);
}

void	fill_line(char table[4][4], char *row1, char *row2, char *row3)
{
	int	l;

	l = 0;
	while (l < 4)
	{
		table[0][l] = row1[l];
		table[1][l] = row2[l];
		table[2][l] = row3[l];
		table[3][l] = 10 - (table[0][l] + table[1][l] + table[2][l]);
		l++;
	}
}

void	get_576_morespace(char table[576][4][4], char poss[24][4], int i, int j)
{
	int	k;
	int	comb;
	int	is_compatible_1;
	int yoyo;

	comb = 0;
	while (i < 24)
	{
		j = 0;
		while (j < 24)
		{
			if (is_compatible(poss[i], poss[j]))
			{
				k = 0;
				while (k < 24)
				{
					is_compatible_1 = is_compatible(poss[i], poss[k]);
					if (is_compatible_1 && is_compatible(poss[j], poss[k]))
						fill_line(table[comb++], poss[i], poss[j], poss[k]);
					
					k++;
					yoyo++;
				}
			}
			yoyo++;
			j++;
		}
		yoyo++;
		i++;
	}
	printf("yoyo ? %d\n", yoyo);
}

void	get_possibilities_576(char table[576][4][4], char poss[24][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	get_576_morespace(table, poss, i, j);
}
