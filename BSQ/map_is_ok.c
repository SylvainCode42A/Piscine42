/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_is_ok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrios <qrios@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 12:33:39 by slidriss          #+#    #+#             */
/*   Updated: 2025/09/24 20:17:15 by qrios            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	read_count_line(char *buffer, int ref)
{
	int	len;
	int	i;
	int	h;

	len = 0;
	i = 0;
	h = 0;
	while (buffer[i] != '\0')
	{
		if (buffer[i] == '\n' && h == 0)
		{
			h = 1;
			len = 0;
		}
		else if (buffer[i] == '\n' && h == 1)
		{
			if (len != ref)
				return (0);
			len = 0;
		}
		else
			len++;
		i++;
	}
	return (1);
}

int	get_first_line_len(char *buffer)
{
	int	len;
	int	i;
	int	h;

	len = 0;
	i = 0;
	h = 0;
	while (buffer[i] != '\0')
	{
		if (buffer[i] == '\n' && h == 0)
		{
			h = 1;
			len = 0;
		}
		else if (buffer[i] == '\n' && h == 1)
			return (len);
		else
			len++;
		i++;
	}
	return (len);
}

int	run_verify_map(char *buffer)
{
	int		len;
	char	header[64];
	char	obs;
	char	empty;

	len = read_header(buffer, header);
	if (len < 4)
	{
		write (2, "map error\n", 10);
		return (0);
	}
	if (!(get_symbole(len, header, &obs, &empty)))
		return (0);
	if (!(verify_number(len, header)))
		return (0);
	if (!(verify_numbers_lines(header, len, buffer)))
		return (0);
	if (!(verify_empty_obs(&empty, &obs, buffer)))
		return (0);
	if (!(verify_line_len(buffer)))
		return (0);
	return (1);
}

int	process_file(char *argv, char *buffer)
{
	int		fd;
	int		n;

	buffer[0] = '\0';
	fd = open(argv, O_RDONLY);
	if (fd < 0)
	{
		write (2, "map error\n", 10);
		return (0);
	}
	n = read(fd, buffer, 25000000);
	if (n < 0)
	{
		write (2, "map error\n", 10);
		close(fd);
		return (0);
	}
	buffer[n] = '\0';
	if (run_verify_map(buffer))
		run_program(buffer);
	close(fd);
	return (0);
}

int	start_verify(int argc, char **argv, int i, char *buffer)
{
	while (i < argc)
	{
		buffer = malloc(25000001);
		process_file(argv[i], buffer);
		i++;
		if (i != argc)
			write (1, "\n", 1);
		if (buffer)
			free(buffer);
	}
	return (0);
}
