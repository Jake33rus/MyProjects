/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 19:37:58 by bcasper           #+#    #+#             */
/*   Updated: 2018/08/25 19:39:24 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print(int x, int y, int col, int row)
{
	col = 0;
	while (++col <= y)
	{
		row = 0;
		while (++row <= x)
		{
			if ((row == 1 && col == 1)
			|| (row == x && col == y && (col != 1 && row != 1)))
				ft_putchar('/');
			else if ((row == x && col == 1) || (row == 1 && col == y))
				ft_putchar('\\');
			else if ((row > 1 || row < x) && (col == 1 || col == y))
				ft_putchar('*');
			else if (row == 1)
				ft_putchar('*');
			else if (row < x)
				ft_putchar(' ');
			else if (row == x)
				ft_putchar('*');
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
		print(x, y, 0, 0);
}
