/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slidriss <slidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 09:39:26 by slidriss          #+#    #+#             */
/*   Updated: 2025/09/16 18:30:30 by slidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i <= size - 2)
	{
		j = i + 1;
		while (j <= size - 1)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

/* int	main()
{
	int tab[5] = {4, 5, 2, 1, 3};

	int o;
	
	o = 0;
	while (o < 5)
	{
		printf("%d", tab[o]);
		o++; 
	}
	ft_sort_int_tab(tab, 5);
	printf("\n");

	o = 0;
	while (o < 5)
	{
		printf("%d", tab[o]);
		o++; 
	}

	return (0);
} */
