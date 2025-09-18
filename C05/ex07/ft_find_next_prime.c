/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slidriss <slidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:22:05 by slidriss          #+#    #+#             */
/*   Updated: 2025/09/16 12:13:06 by slidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_find_next_prime(int nb)
{
	int	i;
	int o;

	o = 2;
	i = nb + 1;
	while (i >= nb)
	{
		while (o < nb)
		{
			if (i % o == 0)
			{
				return (0);
			}
			o++;	
		}
		if (o == nb - 1)
		{
			return (i);
			
		}
		i++;
	}
	return (i);
}

/* int	main()
{
	printf("%d", ft_find_next_prime(12));
	return (0);
} */
