/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:45:57 by thoberth          #+#    #+#             */
/*   Updated: 2019/10/16 16:25:42 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*rslt;

	i = 0;
	if (!(rslt = malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	rslt[ft_strlen(s)] = '\0';
	while (s[i])
	{
		rslt[i] = f(i, s[i]);
		i++;
	}
	return (rslt);
}
