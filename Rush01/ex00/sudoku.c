/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 13:21:11 by ihahn             #+#    #+#             */
/*   Updated: 2018/09/02 13:21:22 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		ft_sudoku(char **tab, int position)
{
	int		x;
	int		y;
	char	nb;

	nb = '0';
	x = position / 9;
	y = position % 9;
	if (position == 90)
		return (1);
	if (tab[x][y] != '.')
		return (ft_sudoku(tab, position + 1));
	while (++nb <= '9')
	{
		if (ft_check_line(tab, nb, x) + ft_check_column(tab, nb, y) == 2)
		{
			if (ft_check_block(tab, x, y, nb) == 1)
			{
				tab[x][y] = nb;
				if (ft_sudoku(tab, position + 1))
					return (1);
			}
		}
	}
	tab[x][y] = '.';
	return (0);
}
