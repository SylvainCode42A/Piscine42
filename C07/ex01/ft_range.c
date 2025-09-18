/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slidriss <slidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 13:46:14 by slidriss          #+#    #+#             */
/*   Updated: 2025/09/17 12:31:05 by slidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*p;

	i = 0;
	size = max - min;
	*p = malloc (sizeof(int) * (size + 1));
	if (!p)
	{
		return (NULL);
	}
	while (i <= size)
	{
		p[i] = i + min;
		i++;
	}
	p[i] = 0;
	return (p);
}

/* int	main()
{
	int	a;

	a = 0;
	int *p = ft_range(10, 10000000);
	if (!p)
	{
		return (1);
	}
	while (p[a])
	{
		printf ("%d\n", p[a]);
		a++;
	}
	free (p);
	return 0;
} */
