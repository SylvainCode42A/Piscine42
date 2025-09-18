/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slidriss <slidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:39:40 by slidriss          #+#    #+#             */
/*   Updated: 2025/09/04 15:58:40 by slidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/* int	main(void)
{
	int a;
	int b;

	a = 2;
	b = 3;

	printf("a = %d et b = %d", a, b);
	printf("\n");
	ft_swap(&a, &b);
	printf("a = %d et b = %d", a, b);
	
	return (0);
} */
