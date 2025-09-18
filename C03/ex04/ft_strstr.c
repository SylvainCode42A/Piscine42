/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slidriss <slidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 12:16:07 by slidriss          #+#    #+#             */
/*   Updated: 2025/09/08 14:00:39 by slidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	o;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		o = 0;
		while (to_find[o] != '\0' && (str[i + o] == to_find[o]))
		{
			o++;
		}
		if (to_find[o] == '\0')
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
/* int main()
{
	char *str = "jEje mapelle";
	char *to_find = "jE m";

	printf ("%s", ft_strstr(str, to_find));
	return (0);
} */