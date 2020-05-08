/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berthetthomas <berthetthomas@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:01:27 by thoberth          #+#    #+#             */
/*   Updated: 2019/11/01 10:19:36 by berthetthom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmod(char const *s1, char const *set)
{
	char	*rslt;
	size_t		i;
	size_t		a;
	size_t		j;

	a = ft_strlen(s1) - ft_strlen(set);
	if (!(rslt = malloc(sizeof(char) * (a + 1))))
		return (NULL);
	i = 0;
	j = ft_strlen(set);
	while (i < a)
	{
		rslt[i] = s1[j];
		i++;
		j++;
	}
	rslt[a] = '\0';
	return (rslt);
}

char	*ft_strtrim_1(char const *s1, char const *set)
{
	size_t		i;
	size_t		j;
	size_t		a;

	i = 0;
	j = 0;
	while (s1[i] && i < ft_strlen(set))
	{
		a = 0;
		while (set[a])
		{
			if (s1[i] == set[a])
				j++;
			a++;
		}
		i++;
	}
	if (j > 0 && j <= ft_strlen(set))
		return (ft_strmod(s1, set));
	return (ft_strdup(s1));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*rslt;

	rslt = ft_strtrim_1(s1, set);
	rslt = ft_strtrim_1(ft_strrev(rslt), ft_strrev(set));
	rslt = ft_strrev(rslt);
	return (rslt);
}

void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int		main(int argc, const char *argv[])
{
	char	*strtrim;
	int		arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
	{
		char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
		if (!(strtrim = ft_strtrim(s1, " ")))
			ft_print_result("NULL");
		else
			ft_print_result(strtrim);
		if (strtrim == s1)
			ft_print_result("\nA new string was not returned");
	}
	else if (arg == 2)
	{
		char s1[] = "lorem ipsum dolor sit amet";
		if (!(strtrim = ft_strtrim(s1, "te")))
			ft_print_result("NULL");
		else
			ft_print_result(strtrim);
		if (strtrim == s1)
			ft_print_result("\nA new string was not returned");
	}
	else if (arg == 3)
	{
		char s1[] = " lorem ipsum dolor sit amet";
		if (!(strtrim = ft_strtrim(s1, "l ")))
			ft_print_result("NULL");
		else
			ft_print_result(strtrim);
		if (strtrim == s1)
			ft_print_result("\nA new string was not returned");
	}
	else if (arg == 4)
	{
		char s1[] = "lorem ipsum dolor sit amet";
		if (!(strtrim = ft_strtrim(s1, "tel")))
			ft_print_result("NULL");
		else
			ft_print_result(strtrim);
		if (strtrim == s1)
			ft_print_result("\nA new string was not returned");
	}
	else if (arg == 5)
	{
		char s1[] = "          ";
		if (!(strtrim = ft_strtrim(s1, " ")))
			ft_print_result("NULL");
		else
			ft_print_result(strtrim);
		if (strtrim == s1)
			ft_print_result("\nA new string was not returned");
	}
	return (0);
}