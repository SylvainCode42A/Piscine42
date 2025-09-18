/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slidriss <slidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 12:32:32 by slidriss          #+#    #+#             */
/*   Updated: 2025/09/18 15:31:35 by slidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	sep_put_to_final(char *sep, int i, char *final)
{
	int	q;

	q = 0;
	while (sep[q])
	{
		final[i] = sep[q];
		i++;
		q++;
	}
	return (i);
}

int	str_put_to_final(char **strs, char *final, int k, int i)
{
	int	j;

	j = 0;
	while (j < ft_strlen(strs[k]))
	{
		final[i] = strs[k][j];
		j++;
		i++;
	}
	k++;
	return (i);
}

int	get_total(int size, char **strs, char *sep)
{
	int	total;
	int	q;

	total = 0;
	q = 0;
	while (q < size)
	{
		total += ft_strlen(strs[q]);
		q++;
	}
	total += (size - 1) * ft_strlen(sep);
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		k;
	int		o;
	int		total;
	char	*final;

	i = 0;
	k = 0;
	o = 0;
	if (!size)
	{
		final = malloc (sizeof(char) * 1);
		final[0] = '\0';
		return (final);
	}
	total = get_total(size, strs, sep);
	final = malloc((sizeof(char)) * (total + 1));
	while (o < size)
	{
		i = str_put_to_final(strs, final, k++, i);
		if (o++ < size - 1)
			i = sep_put_to_final(sep, i, final);
	}
	final[i] = '\0';
	return (final);
}

/* int main()
{
	int o = 0;
	char *strs[] = {"Bonjour", "cava", "bien"};
	char *sep = "|d|";

	char *p = ft_strjoin(3, strs, sep);

	while (p[o])
	{
		printf("%c", p[o]);
		o++;
	}
	printf("\n");
	free (p);
	return 0;
} */
