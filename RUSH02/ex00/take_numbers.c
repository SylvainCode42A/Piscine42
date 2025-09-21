/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brouillon1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slidriss <slidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 11:43:12 by slidriss          #+#    #+#             */
/*   Updated: 2025/09/21 17:05:42 by slidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	write_number(char *number)
{
	write (1, &value[number], ft_strlen(value));
}


void	manage_chain(char **argv)
{
	int		start;
	int		i;
	int		j;
	int		size;
	int		len;
	int		count;
	char	double_nbr[2];

	len = ft_strlen(argv[1]);
	i = 0;
	setup_size(&start, &len);
	while (i < len)
	{
		set_size(&size, &start, &i);
		j = 0;
		while (j < size)
		{
			if (j == 0 && (argv[1][j] >= '1' && argv[1][j] <= '9'))
				first_numbers(&argv[1][j]);
			if (j == 1)
				last_numbers(double_nbr, argv, &i, &j);
			if (j == 2)
			{
				count = (len - i - 1) / 100;
				write_number(&count);
			}
			j++;
		}
		i + 3;
	}
}
