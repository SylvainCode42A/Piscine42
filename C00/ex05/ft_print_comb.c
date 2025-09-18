/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slidriss <slidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 09:31:15 by slidriss          #+#    #+#             */
/*   Updated: 2025/09/05 10:16:49 by slidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int n)
{
	if (n != '7')
	{
		write (1, ",", 1);
		write (1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	o;
	char	p;

	i = '0';
	while (i <= '7')
	{
		o = i + 1;
		while (o <= '8')
		{
			p = o + 1;
			while (p <= '9')
			{
				write (1, &i, 1);
				write (1, &o, 1);
				write (1, &p, 1);
				ft_putchar(i);
				p++;
			}
			o++;
		}
		i++;
	}
}

/* int	main(void)
{
	ft_print_comb();
	return (0);
} */
