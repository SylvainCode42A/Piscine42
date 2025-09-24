/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_program.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrios <qrios@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 12:07:47 by qrios             #+#    #+#             */
/*   Updated: 2025/09/24 18:38:00 by qrios            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	free_numbtable(int **numbtable, int lnb, int llen)
{
	int	i;
	int	j;

	i = 0;
	while (i < lnb)
	{
		j = 0;
		while (j < llen)
			j++;
		free(numbtable[i]);
		i++;
	}
}

void	w_f_tables(char **bigtable, int **numbtable, int lnb, int llen)
{
	int	i;
	int	j;

	i = 0;
	while (bigtable[i])
	{
		j = 0;
		while (bigtable[i][j] && i > 0)
		{
			write(1, &bigtable[i][j], 1);
			j++;
		}
		if (i > 0)
			write(1, "\n", 1);
		free(bigtable[i]);
		i++;
	}
	free(bigtable[i]);
	free_numbtable(numbtable, lnb, llen);
}

int	**create_int_tab(char **bigtable)
{
	int	line_nb;
	int	line_len;
	int	**numbtable;
	int	i;

	numbtable = NULL;
	i = 0;
	line_nb = count_lines(bigtable);
	line_len = count_line_len(bigtable[1]);
	numbtable = malloc(sizeof(int *) * line_nb);
	if (!numbtable)
		return (NULL);
	while (bigtable[i])
	{
		numbtable[i] = malloc(sizeof(int) * line_len);
		if (!numbtable[i])
		{
			free(numbtable[i]);
			return (NULL);
		}
		i++;
	}
	return (numbtable);
}

void	run_program(char *buffer)
{
	char	**bigtable;
	int		**numbtable;
	int		i;
	int		line_nb;
	int		line_len;

	numbtable = NULL;
	bigtable = NULL;
	i = 0;
	bigtable = ft_split(buffer, "\n", 0, 0);
	numbtable = create_int_tab(bigtable);
	line_nb = count_lines(bigtable);
	line_len = count_line_len(bigtable[1]);
	convert_tab_ctoi(numbtable, bigtable, line_nb);
	find_biggest(numbtable, bigtable, line_nb, line_len);
	w_f_tables(bigtable, numbtable, line_nb, line_len);
	if (bigtable)
		free(bigtable);
	if (numbtable)
		free(numbtable);
}
