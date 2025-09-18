/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slidriss <slidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 09:01:04 by slidriss          #+#    #+#             */
/*   Updated: 2025/09/10 09:13:35 by slidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}

/* int main()
{
	printf ("%d\n", ft_recursive_power(9, 7));
	printf ("%d\n", ft_recursive_power(2, 3));
	printf ("%d\n", ft_recursive_power(1, 2));
	printf ("%d\n", ft_recursive_power(5, 0));
	return (0);
} */