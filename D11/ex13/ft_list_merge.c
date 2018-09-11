/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 20:11:50 by bcasper           #+#    #+#             */
/*   Updated: 2018/09/05 20:33:21 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*runner;

	runner = *begin_list1;
	if (runner == 0)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	while (runner->next)
		runner = runner->next;
	runner->next = begin_list2;
}
