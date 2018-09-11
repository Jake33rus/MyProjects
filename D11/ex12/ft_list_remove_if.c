/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 19:53:08 by bcasper           #+#    #+#             */
/*   Updated: 2018/09/05 20:29:24 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*pursuer;
	t_list	*runner;

	pursuer = *begin_list;
	while (pursuer && !cmp(pursuer->data, data_ref))
	{
		*begin_list = pursuer->next;
		free(pursuer);
		pursuer = *begin_list;
	}
	runner = (pursuer) ? (pursuer->next) : (0);
	while (runner)
	{
		if (!cmp(runner->data, data_ref))
		{
			pursuer->next = runner->next;
			free(runner);
		}
		pursuer = runner;
		runner = runner->next;
	}
}
