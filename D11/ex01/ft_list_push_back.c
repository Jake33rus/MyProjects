/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 20:54:52 by bcasper           #+#    #+#             */
/*   Updated: 2018/09/05 17:05:46 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *p;

	p = *begin_list;
	if (!p)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	while (p->next)
		p = p->next;
	p->next = ft_create_elem(data);
}
