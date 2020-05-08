/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:49:16 by thoberth          #+#    #+#             */
/*   Updated: 2019/10/16 15:40:55 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *restrict dst, const char *restrict src, size_t n)
{
	size_t j;
	size_t i;

	j = 0;
	i = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	if (n == 0)
		return (j);
	while ((i < n) && (src[i] != '\0'))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (j);
}
