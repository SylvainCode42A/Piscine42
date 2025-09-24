/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_is_ok_ext_ext.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrios <qrios@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:12:54 by slidriss          #+#    #+#             */
/*   Updated: 2025/09/24 19:35:10 by qrios            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	read_header(char *buffer, char *header)
{
	int		len;

	len = 0;
	while (buffer[len] != '\0' && buffer[len] != '\n' && len < 63)
	{
		header[len] = buffer[len];
		len++;
	}
	header[len] = '\0';
	return (len);
}

int	verify_line_len(char *buffer)
{
	int	ref;
	int	ok;

	ref = get_first_line_len(buffer);
	ok = read_count_line(buffer, ref);
	if (ok == 0)
	{
		write (2, "map error\n", 10);
		return (0);
	}
	return (1);
}

int	str_is_pr(char c)
{
	if (c == '\0')
	{
		return (1);
	}
	if (c < 32 || c > 126)
	{
		return (0);
	}
	return (1);
}
