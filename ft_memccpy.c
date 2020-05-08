/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:48:35 by thoberth          #+#    #+#             */
/*   Updated: 2019/10/17 12:15:02 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict ds, const void *restrict sc, int c, size_t n)
{
	int				i;
	unsigned char	ch;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = ds;
	s = (unsigned char*)sc;
	ch = c;
	while (n > 0 && ch != s[i])
	{
		s[i] = d[i];
		n--;
		i++;
	}
	if (n == 0)
		return (NULL);
	else
		return (&ds[i + 1]);
}
