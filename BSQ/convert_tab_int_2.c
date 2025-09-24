/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_tab_int_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrios <qrios@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 17:35:46 by qrios             #+#    #+#             */
/*   Updated: 2025/09/23 17:41:06 by qrios            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	get_int_val(int **numbtable, char **bigtable, int line_nb, int char_nb)
{
	int	min;

	min = get_value(numbtable, bigtable, line_nb, char_nb);
	numbtable[line_nb][char_nb] = min;
}

void	line_to_nb(int **numbtable, char **bigtable, int line_nb)
{
	int	char_nb;

	char_nb = 0;
	while (bigtable[line_nb][char_nb] != '\0')
	{
		get_int_val(numbtable, bigtable, line_nb, char_nb);
		char_nb++;
	}
}

void	convert_tab_ctoi(int **numbtable, char **bigtable, int lnb)
{
	int	i;

	i = 1;
	while (i < lnb)
	{
		line_to_nb(numbtable, bigtable, i);
		i++;
	}
}

int	count_lines(char **bigtable)
{
	int	i;

	i = 1;
	while (bigtable[i])
	{
		i++;
	}
	return (i);
}

int	count_line_len(char *singleline)
{
	int	i;

	i = 0;
	while (singleline[i])
	{
		i++;
	}
	return (i);
}
