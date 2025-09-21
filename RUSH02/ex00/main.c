/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slidriss <slidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 16:24:55 by slidriss          #+#    #+#             */
/*   Updated: 2025/09/21 17:13:55 by slidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	set_size(int *size, int *start, int *i);
void	setup_size(int *start, int *len);
void	ft_putstr(char *str);
int	ft_strlen(char *str);
void	first_numbers(char c);
void	last_numbers(char *double_nbr, char **argv, int *i, int *j);
void	write_number(char *number);
void	manage_chain(char **argv);


int	main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	manage_chain(argv);
	return (0);
}
