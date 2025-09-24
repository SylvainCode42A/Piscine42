/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrios <qrios@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 15:53:45 by qrios             #+#    #+#             */
/*   Updated: 2025/09/24 20:22:40 by qrios            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	read_stdin(char *buffer, int limit)
{
	int	total;
	int	n;

	total = 0;
	n = read(0, buffer + total, limit - total);
	while (n > 0)
	{
		total += n;
		n = read(0, buffer + total, limit - total);
	}
	if (n < 0)
		return (-1);
	buffer[total] = '\0';
	return (total);
}

int	main(int argc, char **argv)
{
	int		n;
	char	*buffer;
	int		map_ok;

	buffer = NULL;
	if (argc < 2)
	{
		buffer = malloc(25000001);
		n = read_stdin(buffer, 25000000);
		if (n < 0)
		{
			write(2, "map error\n", 10);
			return (0);
		}
		buffer[n] = '\0';
		map_ok = run_verify_map(buffer);
		if (map_ok == 1)
			run_program(buffer);
		if (buffer)
			free(buffer);
	}
	else
		start_verify(argc, argv, 1, buffer);
	return (0);
}
