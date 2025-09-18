/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slidriss <slidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 17:31:59 by slidriss          #+#    #+#             */
/*   Updated: 2025/09/15 01:53:06 by slidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	o;
	int	i;

	i = 0;
	o = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[o])
	{
		dest[i] = src[o];
		i++;
		o++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main()
{
	char *src = " tout le monde";
	char dest[50] = "Bonjour";
	ft_strcat(dest, src);
	printf ("%s", dest);
	return (0);
}
