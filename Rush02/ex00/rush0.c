/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 19:51:31 by bcasper           #+#    #+#             */
/*   Updated: 2018/09/09 21:06:22 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	ft_pos0(int col, int row, int w, int h)
{
	char c;
	char t;

	c = ' ';
	if (row == 1)
	{
		t = (col == w) ? 'o' : '-';
		c = (col == 1) ? 'o' : t;
	}
	else if (row == h)
	{
		t = (col == w) ? 'o' : '-';
		c = (col == 1) ? 'o' : t;
	}
	else if (col == 1 || col == w)
		c = '|';
	return (c);
}

char	*ft_create_rush0(int w, int h)
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
			str[i] = ft_pos0(col, row, w, h);
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
