/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 15:59:23 by thoberth          #+#    #+#             */
/*   Updated: 2019/10/16 16:26:27 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		diff_check(char *str, char *charset, int i)
{
	int		j;
	int		a;

	j = 0;
	a = 0;
	while (charset[j])
	{
		(str[i] == charset[j]) ? a++ : a;
		j++;
	}
	return (a == 0 ? 1 : 0);
}

char	*ft_writestr(char *test, char *str, char *charset, int i)
{
	int		j;
	int		a;

	j = 0;
	a = 0;
	while (str[i] && diff_check(str, charset, i) == 1)
	{
		a++;
		i++;
	}
	i -= a;
	if (!(test = (char*)malloc(sizeof(char) * (a + 1))))
		return (0);
	a = 0;
	while (str[i] && diff_check(str, charset, i) == 1)
	{
		test[a] = str[i];
		a++;
		i++;
	}
	test[a] = '\0';
	return (test);
}

int		ft_strslen(char *str, char *charset, int i)
{
	int		j;
	int		a;

	j = 0;
	a = 0;
	while (str[i])
	{
		if (str[i] && diff_check(str, charset, i) == 1)
		{
			a++;
			while (str[i] && diff_check(str, charset, i) == 1)
				i++;
		}
		else
		{
			while (str[i] && diff_check(str, charset, i) == 0)
				i++;
		}
	}
	return (a);
}

char	**ft_split(char *str, char *charset)
{
	char	**test;
	int		i;
	int		a;

	i = 0;
	a = ft_strslen(str, charset, i);
	test = (char**)malloc(sizeof(char*) * (a + 1));
	a = 0;
	while (str[i])
	{
		if (str[i] && diff_check(str, charset, i) == 1)
		{
			test[a] = ft_writestr(test[a], str, charset, i);
			a++;
			while (str[i] && diff_check(str, charset, i) == 1)
				i++;
		}
		while (str[i] && diff_check(str, charset, i) == 0)
			i++;
	}
	test[a] = 0;
	return (test);
}
