/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slidriss <slidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 17:53:01 by slidriss          #+#    #+#             */
/*   Updated: 2025/09/05 09:13:53 by slidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
		temp = 0;
	}
}

/* int main(void)
{
	int tab[5] = {1, 2, 3, 4, 5};
	ft_rev_int_tab(tab, 5);
	int o;

	o = 0;
	while (o < 5)
	{
		printf("%d", tab[o]);
		o++;
	}
	return (0);
} */
