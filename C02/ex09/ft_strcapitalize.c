/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slidriss <slidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 09:54:14 by slidriss          #+#    #+#             */
/*   Updated: 2025/09/07 11:56:23 by slidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	numero;

	numero = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (numero == 1 && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if (numero == 0 && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
			numero = 0;
		}
		else
		{
			numero = 1;
		}
		i++;
	}
	return (str);
}

/* int main()
{
	char str[] = "hi, how are you? 42words forty-two; fifty+and+one";
	ft_strcapitalize(str);
	printf ("%s", str);
	return (0);
} */