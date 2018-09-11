/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 19:05:34 by bcasper           #+#    #+#             */
/*   Updated: 2018/08/23 19:07:20 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int j;
	int i;
	int tmp;

	j = 1;
	while (j < size)
	{
		i = 1;
		while (i < size)
		{
			if (tab[i] < tab[i - 1])
			{
				tmp = tab[i];
				tab[i] = tab[i - 1];
				tab[i - 1] = tmp;
			}
			i++;
		}
		j++;
	}
}
