/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slidriss <slidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 22:35:26 by slidriss          #+#    #+#             */
/*   Updated: 2025/09/15 17:38:08 by slidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	get_possibilities_576(char table[576][4][4], char poss[24][4]);
int		is_compatible(char a[4], char b[4]);
void	get_possibilities_24(char table[24][4]);
void	split_input(char *str, char res[4][4]);
char	*par(char *str);
char	*err_free(char *p);
int		get_full_tab_str(char tab[4][4], char *str);

void	print_tab(char tab[4][4])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = tab[i][j] + '0';
			write(1, &c, 1);
			if (j != 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	start_program(char *p)
{
	char	poss[24][4];
	char	poss2[576][4][4];
	int		i;
	int		res_found;

	get_possibilities_24(poss);
	get_possibilities_576(poss2, poss);
	i = 0;
	while (i < 576)
	{
		res_found = get_full_tab_str(poss2[i], p);
		if (res_found == 1)
		{
			print_tab(poss2[i]);
			break ;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	*p;

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	p = par(argv[1]);
	if (p)
	{
		start_program(p);
		free(p);
	}
	return (0);
}
