/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slidriss <slidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 11:39:45 by slidriss          #+#    #+#             */
/*   Updated: 2025/09/09 11:21:45 by slidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	o;

	i = 0;
	o = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[o] && o < nb)
	{
		dest[i] = src[o];
		o++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* int	main()
{
	char *src = " tout le monde";
	char dest[50] = "Bonjour";
	
	ft_strncat(dest, src, 1);
	printf ("%s", dest);
	return (0);
} */