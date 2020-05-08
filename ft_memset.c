/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:48:13 by thoberth          #+#    #+#             */
/*   Updated: 2019/10/17 12:15:48 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	*dst;
	unsigned char	ch;

	i = 0;
	dst = b;
	ch = c;
	while (len > 0)
	{
		dst[i] = c;
		i++;
		len--;
	}
	return (b);
}
