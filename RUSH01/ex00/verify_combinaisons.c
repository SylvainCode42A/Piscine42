/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_combinaisons.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slidriss <slidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 22:35:46 by slidriss          #+#    #+#             */
/*   Updated: 2025/09/14 22:35:59 by slidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb);

int	ft_row1left(char tab[4])
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (i < 4)
	{
		if (tab[i] > j)
		{
			j = tab[i];
			count++;
		}
		i++;
	}
	return (count);
}

int	ft_row1right(char tab[4])
{
	int	i;
	int	j;
	int	count;

	i = 3;
	j = 0;
	count = 0;
	while (i >= 0)
	{
		if (tab[i] > j)
		{
			j = tab[i];
			count++;
		}
		i--;
	}
	return (count);
}

int	ft_col1up(char tab[4][4], int n)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (i < 4)
	{
		if (tab[i][n] > j)
		{
			j = tab[i][n];
			count++;
		}
		i++;
	}
	return (count);
}

int	ft_col1down(char tab[4][4], int n)
{
	int	i;
	int	j;
	int	count;

	i = 3;
	j = 0;
	count = 0;
	while (i >= 0)
	{
		if (tab[i][n] > j)
		{
			j = tab[i][n];
			count = count + 1;
		}
		i--;
	}
	return (count);
}

int	get_full_tab_str(char tab[4][4], char *str)
{
	int	i;
	int	found;

	i = 0;
	while (i < 16)
	{
		if (i < 4)
			found = ft_col1up(tab, i);
		else if (i < 8)
			found = ft_col1down(tab, i - 4);
		else if (i < 12)
			found = ft_row1left(tab[i - 8]);
		else
			found = ft_row1right(tab[i - 12]);
		if (str[i] - '0' != 0 && found != str[i] - '0')
			return (0);
		i++;
	}
	return (1);
}
