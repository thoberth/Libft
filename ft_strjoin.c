/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 12:15:12 by thoberth          #+#    #+#             */
/*   Updated: 2019/10/16 15:40:45 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		countstr(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		h;
	int		k;

	i = 0;
	h = 0;
	k = 0;
	while (sep[h] != '\0')
		h++;
	while (i < size)
	{
		j = 0;
		while (strs[i][j++] != '\0')
			k++;
		i++;
	}
	return (k + (h * (size - 1)));
}

int		put_sep(char *tab, char *sep)
{
	int		p;

	p = 0;
	while (sep[p] != '\0')
	{
		tab[p] = sep[p];
		p++;
	}
	return (p);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;
	int		j;
	int		h;

	if (size == 0)
		tab = malloc(sizeof(char));
	else if (size < 0)
		return (NULL);
	else if (!(tab = malloc((countstr(size, strs, sep) + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	h = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			tab[h++] = strs[i][j++];
		if (i < size - 1)
			h = h + put_sep(tab + h, sep);
		i++;
	}
	tab[h] = '\0';
	return (tab);
}
