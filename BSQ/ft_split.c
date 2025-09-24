/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrios <qrios@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 16:47:01 by qrios             #+#    #+#             */
/*   Updated: 2025/09/24 11:57:28 by qrios            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_countwords(char *str, char *sep)
{
	int	i;
	int	count;
	int	in;

	i = 0;
	count = 0;
	in = 0;
	while (str[i] != '\0')
	{
		if (!(is_sep(str[i], sep)) && !in)
		{
			in = 1;
			count++;
		}
		if (is_sep(str[i], sep))
			in = 0;
		i++;
	}
	return (count);
}

int	is_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strdup_custom(char *str, int start, int end)
{
	int		len;
	int		itab;
	char	*tab;

	len = end - start;
	tab = malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (NULL);
	itab = 0;
	while (itab < len)
	{
		tab[itab] = str[start + itab];
		itab++;
	}
	tab[len] = '\0';
	return (tab);
}

char	**ft_split(char *str, char *charset, int i, int k)
{
	int		j;
	char	**mall_words;

	mall_words = malloc(sizeof(char *) * (ft_countwords(str, charset) + 1));
	if (!mall_words)
		return (NULL);
	if (str[0] == '\0')
		mall_words[0] = NULL;
	while (str[i] != '\0')
	{
		while (is_sep(str[i], charset) && str[i] != '\0')
			i++;
		j = i;
		while (!(is_sep(str[i], charset)) && str[i] != '\0')
			i++;
		if (i > j)
		{
			mall_words[k] = ft_strdup_custom(str, j, i);
			if (!mall_words[k])
				return (NULL);
			k++;
		}
	}
	mall_words[k] = NULL;
	return (mall_words);
}
