/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 18:49:11 by bcasper           #+#    #+#             */
/*   Updated: 2018/09/07 20:04:04 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		max(int a, int b)
{
	return (a > b ? a : b);
}

int		btree_level_count(t_btree *root)
{
	int	count;

	count = 0;
	if (!root)
		return (0);
	if (root->left)
		count = max(count, btree_level_count(root->left));
	if (root->right)
		count = max(count, btree_level_count(root->right));
	return (count + 1);
}
