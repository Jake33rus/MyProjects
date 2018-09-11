/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 19:35:40 by bcasper           #+#    #+#             */
/*   Updated: 2018/08/25 19:35:49 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print(int x, int y, int col, int row)
{
	while (++row < y)
	{
		col = -1;
		while (++col < x)
		{
			if (col == 0 && row == 0)
				ft_putchar('A');
			else if ((col == (x - 1) & row == 0)
					|| (col == 0 && row == (y - 1)))
				ft_putchar('C');
			else if (col == (x - 1) && row == (y - 1))
				ft_putchar('A');
			else if (col == 0 || row == 0 || col == (x - 1) || row == (y - 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
		print(x, y, -1, -1);
}
