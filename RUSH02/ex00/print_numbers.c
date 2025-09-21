/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doss1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slidriss <slidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 16:43:45 by slidriss          #+#    #+#             */
/*   Updated: 2025/09/21 17:07:15 by slidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	set_size(int *size, int *start, int *i)
{
	if (i == 0)
		size = start;
	else
		size = 3;
}

void	setup_size(int *start, int *len)
{
	start = len % 3;
	if (start == 0)
		size = 3;
}

void	first_numbers(char c)
{
	write_number(&c);
	ft_putstr("hundred");
}

void	last_numbers(char *double_nbr, char **argv, int *i, int *j)
{
	double_nbr[0] = argv[1][j];
	double_nbr[1] = argv[1][j + 1];
	if (double_nbr[0] == 0 && double_nbr[1] == 0)
		exit;
	if (double_nbr[0] == 0 && (double_nbr[1] >= '1' && double_nbr[1] <= '9'))
		write_number(&double_nbr[1]);
	if (double_nbr <= 19 && double_nbr >= 10)
		write_number(double_nbr);
	if (double_nbr >= '20')
	{		
		write_number(double_nbr[0] * 10);
		if (double_nbr[1] != '0')
			write_number(&double_nbr[1]);
	}
}


