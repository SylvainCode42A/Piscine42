/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slidriss <slidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 12:23:28 by slidriss          #+#    #+#             */
/*   Updated: 2025/09/17 12:30:18 by slidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *str, int i)
{
	int		o;
	char	*p;

	o = 0;
	*p = malloc (sizeof(char) * i);
	while (str[o])
	{
		p[o] = str[o];
		o++;
	}
	return (p);
}

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

/* int main()
{
	char *str = "Bonjour";
	int	i = ft_strlen(str);
	printf("%s\n", ft_strdup(str, i));
	free (p);
	return (0);
} */
