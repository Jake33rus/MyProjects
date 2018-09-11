/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 20:17:53 by bcasper           #+#    #+#             */
/*   Updated: 2018/09/09 21:06:46 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	ft_pos2(int col, int row, int w, int h)
{
	char c;
	char t;

	c = ' ';
	if (row == 1)
	{
		t = (col == w) ? 'A' : 'B';
		c = (col == 1) ? 'A' : t;
	}
	else if (row == h)
	{
		t = (col == w) ? 'C' : 'B';
		c = (col == 1) ? 'C' : t;
	}
	else if (col == 1 || col == w)
		c = 'B';
	return (c);
}

char	*ft_create_rush2(int w, int h)
{
	int		row;
	int		col;
	int		i;
	char	*str;

	str = malloc((w * h) + 1);
	row = 1;
	i = 0;
	if (w < 0 || h < 0)
		return (0);
	while (row <= h)
	{
		col = 1;
		while (col <= w)
		{
			str[i] = ft_pos2(col, row, w, h);
			i++;
			col++;
		}
		str[i] = '\n';
		i++;
		row++;
	}
	str[i] = '\0';
	return (str);
}
