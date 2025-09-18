/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slidriss <slidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 09:05:05 by slidriss          #+#    #+#             */
/*   Updated: 2025/09/09 15:07:45 by slidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}

/* int	main()
{
	printf ("%d\n", ft_recursive_factorial(9));
	printf ("%d\n", ft_recursive_factorial(2));
	printf ("%d\n", ft_recursive_factorial(1));
	printf ("%d\n", ft_recursive_factorial(5));
	return (0);
} */