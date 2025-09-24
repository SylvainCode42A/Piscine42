/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_tab_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrios <qrios@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 17:27:03 by qrios             #+#    #+#             */
/*   Updated: 2025/09/23 17:36:16 by qrios            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	get_header_arg(char **numbtable, int param)
{
	char	*header;
	int		h_len;

	header = numbtable[0];
	h_len = 0;
	while (header[h_len] != '\0')
		h_len++;
	return (header[h_len - param]);
}

int	get_min(int a, int b, int c)
{
	if (a <= b && a <= c)
		return (a);
	if (b <= a && b <= c)
		return (b);
	if (c <= a && c <= b)
		return (c);
	return (0);
}

int	checkaround(int **numbtable, int line_nb, int char_nb)
{
	int		res;
	char	topchar;
	char	diagchar;
	char	leftchar;

	if (line_nb == 1 || char_nb == 0)
		res = 1;
	else
	{
		topchar = numbtable[line_nb - 1][char_nb];
		diagchar = numbtable[line_nb - 1][char_nb - 1];
		leftchar = numbtable[line_nb][char_nb - 1];
		res = (1 + get_min(topchar, diagchar, leftchar));
	}
	return (res);
}

int	get_value(int **numbtable, char **bigtable, int line_nb, int char_nb)
{
	char	c;
	char	empty;
	char	obs;

	obs = get_header_arg(bigtable, 2);
	empty = get_header_arg(bigtable, 3);
	c = bigtable[line_nb][char_nb];
	if (c == obs)
		return (0);
	if (c == empty)
	{
		return (checkaround(numbtable, line_nb, char_nb));
	}
	return (0);
}
