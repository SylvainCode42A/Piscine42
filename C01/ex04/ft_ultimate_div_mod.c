/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slidriss <slidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 16:34:29 by slidriss          #+#    #+#             */
/*   Updated: 2025/09/04 16:46:13 by slidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tempa;
	int	tempb;

	tempa = *a;
	tempb = *b;
	*a = tempa / tempb;
	*b = tempa % tempb;
}

/* int	main(void)
{
	int a;
	int b;

	a = 20;
	b = 10;

	printf("a = %d et b = %d", a, b);
	printf("\n");
	ft_ultimate_div_mod(&a, &b);
	printf("a = %d et b = %d", a, b);
	return (0);
} */
