/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 12:35:58 by thoberth          #+#    #+#             */
/*   Updated: 2019/10/16 16:31:02 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lsnew;

	if (!(lsnew = malloc(sizeof(t_list))))
		return (NULL);
	lsnew->content = content;
	lsnew->next = NULL;
	return (lsnew);
}
