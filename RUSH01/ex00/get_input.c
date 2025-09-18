/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slidriss <slidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 22:35:03 by slidriss          #+#    #+#             */
/*   Updated: 2025/09/14 22:35:08 by slidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*err_free(char *p)
{
	write(1, "Error\n", 6);
	if (p)
		free(p);
	return (0);
}

char	*par(char *str)
{
	char	*str_edit;
	int		i;
	int		j;

	str_edit = malloc (17);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (i >= 31 || j >= 16)
			return (err_free(str_edit));
		if (str[i] >= '1' && str[i] <= '4' && j < 16)
		{
			str_edit[j] = str[i];
			j++;
		}
		else if (str[i] != ' ')
			return (err_free(str_edit));
		i++;
	}
	if (j != 16)
		return (err_free(str_edit));
	str_edit[16] = '\0';
	return (str_edit);
}
