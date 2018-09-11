/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 18:17:36 by bcasper           #+#    #+#             */
/*   Updated: 2018/09/06 21:47:53 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree		*tree;

	if (!tree = (t_btree*)malloc(sizeof(t_btree)))
		return (0);
	tree->item = item;
	tree->left = 0;
	tree->right = 0;
	return (tree);
}
