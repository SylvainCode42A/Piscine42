/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slidriss <slidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 07:56:00 by slidriss          #+#    #+#             */
/*   Updated: 2025/09/09 15:07:24 by slidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (nb == 0)
	{
		return (1);
	}
	while (i <= nb)
	{
		result = result * i;
		i++;
	}
	return (result);
}

/* int main()
{
	printf ("%d\n", ft_iterative_factorial(0));
	printf ("%d\n", ft_iterative_factorial(2));
	printf ("%d\n", ft_iterative_factorial(1));
	printf ("%d\n", ft_iterative_factorial(5));
	return 0;	
} */ 