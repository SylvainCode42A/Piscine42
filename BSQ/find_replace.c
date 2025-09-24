/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_replace.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrios <qrios@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 10:20:23 by qrios             #+#    #+#             */
/*   Updated: 2025/09/24 19:33:07 by qrios            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	replace_with_sep(char **bigtable, int res[3], int tmpline, int tmpcol)
{
	char	fill;
	int		line;
	int		col;
	int		biggest;

	line = res[2];
	col = res[1];
	biggest = res[0];
	fill = get_header_arg(bigtable, 1);
	tmpline = line;
	while (tmpline != line - biggest && tmpline > 0)
	{
		tmpcol = col;
		while (tmpcol != col - biggest)
		{
			bigtable[tmpline][tmpcol] = fill;
			tmpcol--;
		}
		tmpline--;
	}
}

void	find_biggest(int **numbtable, char **bigtable, int lnb, int llen)
{
	int	biggest;
	int	i;
	int	j;
	int	res[3];

	j = 0;
	biggest = 0;
	i = 1;
	while (i < lnb)
	{
		j = 0;
		while (j < llen)
		{
			if (numbtable[i][j] > biggest)
			{
				biggest = numbtable[i][j];
				res[1] = j;
				res[2] = i;
			}
			j++;
		}
		i++;
	}
	res[0] = biggest;
	replace_with_sep(bigtable, res, 0, 0);
}
