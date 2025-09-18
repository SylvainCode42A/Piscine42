/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slidriss <slidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 16:50:44 by slidriss          #+#    #+#             */
/*   Updated: 2025/09/17 20:23:37 by slidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	value;
	int	i;

	i = 0;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	value = max - min;
	*range = malloc (sizeof(int) * value);
	if (!*range)
	{
		return (-1);
	}
	while (i < value)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}

/* int main()
{
	int o = 0;
	int	*tab;
	int	r = ft_ultimate_range(&tab, 10, 15);
	while (o < r)
	{
		printf ("%d\n", tab[o]);
		o++;
	}
	printf("il y a %d caracteres\n", r);
	free (tab);
	return 0;
} */
