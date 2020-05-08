/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:01:00 by thoberth          #+#    #+#             */
/*   Updated: 2019/10/16 15:40:50 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t i;
	size_t j;
	size_t result;

	i = 0;
	result = ft_strlen(dst) + ft_strlen(src);
	j = ft_strlen(dst);
	if (size <= j)
	{
		return (ft_strlen(src) + size);
	}
	j = ft_strlen(dst);
	while ((j < (size - 1)) && (src[i] != '\0'))
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (result);
}
