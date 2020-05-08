/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berthetthomas <berthetthomas@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 16:12:47 by thoberth          #+#    #+#             */
/*   Updated: 2019/10/19 00:54:38 by berthetthom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	int				i;
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	tmp;

	i = 0;
	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	while (n > 0)
	{
		tmp = s[i];
		d[i] = tmp;
		n--;
		i++;
	}
	return (dst);
}
