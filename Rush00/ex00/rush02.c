/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchristi <hchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 18:28:12 by hchristi          #+#    #+#             */
/*   Updated: 2018/08/26 18:28:31 by hchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int row;
	int col;

	row = 0;
	while (row < y && x > 0 && y > 0)
	{
		col = 0;
		while (col < x)
		{
			if (row == 0 && (col == 0 || col + 1 == x))
				ft_putchar('A');
			else if (row + 1 == y && (col == 0 || col + 1 == x))
				ft_putchar('C');
			else if ((row == 0 && (col != 0 || col + 1 != x)) ||
					(row + 1 == y && (col != 0 || col + 1 != x)) ||
					(row != 0 && (col == 0 || col + 1 == x)) ||
					(row + 1 != y && (col == 0 || col + 1 == x)))
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
