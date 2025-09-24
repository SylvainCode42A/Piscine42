/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrios <qrios@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 16:48:19 by qrios             #+#    #+#             */
/*   Updated: 2025/09/24 19:34:54 by qrios            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

void	get_int_val(int **numbtable, char **bigtable, int line_nb, int char_nb);
void	line_to_nb(int **numbtable, char **bigtable, int line_nb);
void	convert_tab_ctoi(int **numbtable, char **bigtable, int lnb);
int		count_lines(char **bigtable);
int		count_line_len(char *singleline);
char	get_header_arg(char **numbtable, int param);
int		get_min(int a, int b, int c);
int		checkaround(int **numbtable, int line_nb, int char_nb);
int		get_value(int **numbtable, char **bigtable, int line_nb, int char_nb);
void	replace_with_sep(char **bigtable, int res[3], int tmpline, int tmpcol);
void	find_biggest(int **numbtable, char **bigtable, int lnb, int llen);
int		ft_countwords(char *str, char *sep);
int		is_sep(char c, char *sep);
char	*ft_strdup_custom(char *str, int start, int end);
char	**ft_split(char *str, char *charset, int i, int k);
int		main(int argc, char **argv);
int		read_header(char *buffer, char *header);
int		verify_line_len(char *buffer);
int		get_symbole(int len, char *header, char *obs, char *empty);
int		verify_number(int len, char *header);
int		count_files_lines(char *buffer);
int		verify_numbers_lines(char *header, int len, char *buffer);
int		verify_empty_obs(char *empty, char *obs, char *buffer);
int		read_count_line(char *buffer, int ref);
int		get_first_line_len(char *buffer);
int		run_verify_map(char *buffer);
int		start_verify(int argc, char **argv, int i, char *buffer);
void	free_numbtable(int **numbtable, int lnb, int llen);
void	w_f_tables(char **bigtable, int **numbtable, int lnb, int llen);
int		**create_int_tab(char **bigtable);
void	run_program(char *buffer);
int		process_file(char *argv, char *buffer);
int		str_is_pr(char c);

#endif