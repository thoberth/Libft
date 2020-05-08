/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 11:05:39 by thoberth          #+#    #+#             */
/*   Updated: 2019/10/17 13:14:41 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*rt;

	if (!count || !size)
	{
		count = 1;
		size = 1;
	}
	if (!(rt = (void*)malloc(size * count)))
		return (NULL);
	ft_bzero(rt, count * size);
	return (rt);
}
