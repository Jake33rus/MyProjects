/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 22:16:31 by bcasper           #+#    #+#             */
/*   Updated: 2018/09/05 15:07:00 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*p;
	int		len;

	if (!begin_list)
		return (0);
	p = begin_list;
	len = 1;
	while (p->next)
	{
		len++;
		p = p->next;
	}
	return (len);
}
