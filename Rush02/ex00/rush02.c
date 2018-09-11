/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 19:16:06 by bcasper           #+#    #+#             */
/*   Updated: 2018/09/09 22:02:02 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*ft_conversion_to_line(int *row, int *col)
{
	char	buf;
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = (char*)malloc(sizeof(char) * 4048);
	while ((read(0, &buf, 1)))
	{
		*col = j;
		if (buf == '\n')
		{
			j = 0;
			(*row)++;
		}
		else
			j++;
		str[i] = buf;
		i++;
	}
	str[i] = '\0';
	if (ft_strlen(str) < 2)
		return (NULL);
	return (str);
}

void	ft_definition_rush(char *str, int row, int col)
{
	int i;

	i = 0;
	if (ft_strcmp(str, ft_create_rush0(col, row)) == 0)
		ft_show_result(row, col, 0, i++);
	if (ft_strcmp(str, ft_create_rush1(col, row)) == 0)
		ft_show_result(row, col, 1, i++);
	if (ft_strcmp(str, ft_create_rush2(col, row)) == 0)
		ft_show_result(row, col, 2, i++);
	if (ft_strcmp(str, ft_create_rush3(col, row)) == 0)
		ft_show_result(row, col, 3, i++);
	if (ft_strcmp(str, ft_create_rush4(col, row)) == 0)
		ft_show_result(row, col, 4, i++);
	if (i == 0)
		ft_putstr("aucune");
}

int		main(void)
{
	int		row;
	int		col;
	char	*str;

	row = 0;
	col = 0;
	str = ft_conversion_to_line(&row, &col);
	if (!str)
	{
		ft_putstr("aucune\n");
		return (0);
	}
	if ((row * col) >= 4048)
	{
		ft_putstr("aucune");
		return (0);
	}
	ft_definition_rush(str, row, col);
	ft_putchar('\n');
	return (0);
}
