/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slidriss <slidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:58:30 by slidriss          #+#    #+#             */
/*   Updated: 2025/09/04 16:14:51 by slidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/* int	main(void)
{
	int a;
	int b;
	int div;
	int mod;
	
	a = 10;
	b = 20;
	ft_div_mod(a, b, &div, &mod);
	printf("%d div, %d, mod\n", div, mod);
	return (0);
} */
