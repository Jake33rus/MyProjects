/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 20:53:45 by bcasper           #+#    #+#             */
/*   Updated: 2018/09/06 21:39:04 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	btree_insert_data(t_btree **root, void *item,
	int (*cmpf)(void *, void *))
{
	t_btree	branch;

	if (!root || !*root || !item)
	{
		if (item && root)
			*root = btree_create_node(item);
		return ;
	}
	branch = *root;
	if (cmpf(item, branch->item) < 0)
	{
		if (branch->left)
			btree_insert_data(&branch->left, item, cmpf);
		else
			branch->left = btree_create_node(item);
	}
	else
	{
		if (branch->right)
			btree_insert_data(&branch->right, item, cmpf);
		else
			branch->right = btree_create_node(item);
	}
}
