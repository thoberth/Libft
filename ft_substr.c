/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:35:25 by thoberth          #+#    #+#             */
/*   Updated: 2019/10/17 12:12:02 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*sub;
	unsigned int		t;
	int					i;

	i = 0;
	t = start + len;
	if (!(sub = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	sub[len + 1] = '\0';
	while (start <= t)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	return (sub);
}
