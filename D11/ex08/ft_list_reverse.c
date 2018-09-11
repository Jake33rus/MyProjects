/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 17:19:29 by bcasper           #+#    #+#             */
/*   Updated: 2018/09/05 18:29:23 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *i;
	t_list *j;
	t_list *tmp;

	if (begin_list == 0)
		return ;
	tmp = ((void*)0);
	i = ((void*)0);
	j = *begin_list;
	while (j)
	{
		i = j->next;
		j->next = tmp;
		tmp = j;
		j = i;
	}
	*begin_list = tmp;
}
