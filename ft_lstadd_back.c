/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:06:34 by thoberth          #+#    #+#             */
/*   Updated: 2019/10/16 16:38:55 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*elem1;
	t_list	*elem2;

	elem1 = *alst;
	elem2 = *alst;
	while (elem1)
	{
		elem2 = elem1;
		elem1 = elem1->next;
	}
	elem2->next = new;
	new->next = NULL;
}
