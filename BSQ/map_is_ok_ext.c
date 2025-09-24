/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_is_ok_ext.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrios <qrios@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:11:58 by slidriss          #+#    #+#             */
/*   Updated: 2025/09/24 19:42:55 by qrios            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	get_symbole(int len, char *header, char *obs, char *empty)
{
	char	full;

	full = header[len - 1];
	*obs = header[len - 2];
	*empty = header[len - 3];
	if (*empty >= '0' && *empty <= '9')
	{
		write (2, "map error\n", 10);
		return (0);
	}
	if (!(str_is_pr(*obs)) || !(str_is_pr(full)) || !(str_is_pr(*empty)))
	{
		write (2, "map error\n", 10);
		return (0);
	}
	if (full == *obs || full == *empty || *obs == *empty)
	{
		write (2, "map error\n", 10);
		return (0);
	}
	return (1);
}

int	verify_number(int len, char *header)
{
	int	i;

	i = 0;
	while (i < len - 3)
	{
		if (!(header[i] >= '0' && header[i] <= '9'))
		{
			write (2, "map error\n", 10);
			return (0);
		}
		i++;
	}
	return (1);
}

int	count_files_lines(char *buffer)
{
	int		row_file;
	int		last_char;
	int		i;

	last_char = 0;
	row_file = 0;
	i = 0;
	while (buffer[i] != '\0')
	{
		if (buffer[i] == '\n')
			row_file++;
		last_char = buffer[i];
		i++;
	}
	if (last_char != '\n' && last_char != 0)
		row_file++;
	return (row_file);
}

int	verify_numbers_lines(char *header, int len, char *buffer)
{
	int		i;
	int		row_header;
	int		row_file;

	i = 0;
	row_header = 0;
	row_file = 0;
	while (i < len - 3)
	{
		row_header = row_header * 10 + (header[i] - '0');
		i++;
	}
	if (row_header <= 0)
	{
		write (2, "map error\n", 10);
		return (0);
	}
	row_file = count_files_lines(buffer);
	if (row_file - 1 != row_header)
	{
		write (2, "map error\n", 10);
		return (0);
	}
	return (1);
}

int	verify_empty_obs(char *empty, char *obs, char *buffer)
{
	int	i;
	int	noempt;

	noempt = 0;
	i = 0;
	while (buffer[i] != '\0' && buffer[i] != '\n')
		i++;
	while (buffer[i] != '\0')
	{
		if (buffer[i] == *empty)
			noempt = 1;
		if (buffer[i] != *empty && buffer[i] != *obs && buffer[i] != '\n')
		{
			write (2, "map error\n", 10);
			return (0);
		}
		i++;
	}
	if (noempt == 0)
	{
		write (2, "map error\n", 10);
		return (0);
	}
	return (1);
}
