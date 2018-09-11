/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 11:43:03 by bcasper           #+#    #+#             */
/*   Updated: 2018/09/05 16:47:09 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*p;

	p = ft_create_elem(data);
	if (!(*begin_list))
	{
		*begin_list = p;
		return ;
	}
	p->next = *begin_list;
	*begin_list = p;
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*new;
	int		i;

	if (!ac)
		return (0);
	i = 0;
	new = 0;
	while (i < ac)
	{
		ft_list_push_front(&new, av[i]);
		i++;
	}
	return (new);
}
