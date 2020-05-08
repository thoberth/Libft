/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 16:16:15 by thoberth          #+#    #+#             */
/*   Updated: 2019/10/17 12:07:36 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;

	ptr = *lst;
	if (!ptr)
		return ;
	while (ptr)
	{
		ptr = *lst;
		(del)(ptr->content);
		lst = &ptr->next;
		free(lst);
		lst = NULL;
	}
}
