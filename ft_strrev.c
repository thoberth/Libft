/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:08:05 by thoberth          #+#    #+#             */
/*   Updated: 2019/10/17 12:17:32 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(const char *str)
{
	char		*rslt;
	size_t		i;
	size_t		j;

	if (!(rslt = malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (NULL);
	rslt[ft_strlen(str)] = '\0';
	i = 0;
	j = (ft_strlen(str)) - 1;
	while (i < ft_strlen(str))
	{
		rslt[i] = str[j];
		i++;
		j--;
	}
	return (rslt);
}
