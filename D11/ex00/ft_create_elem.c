/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 20:44:55 by bcasper           #+#    #+#             */
/*   Updated: 2018/09/04 21:17:57 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *list;

	if (!(list = (t_list*)malloc(sizeof(t_list))))
		return (0);
	list->data = data;
	list->next = NULL;
	return (list);
}
