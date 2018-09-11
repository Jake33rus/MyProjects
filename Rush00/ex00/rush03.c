/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 19:22:24 by bcasper           #+#    #+#             */
/*   Updated: 2018/08/25 19:24:38 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_first_last_line(int x)
{
	ft_putchar('A');
	while (x > 2)
	{
		ft_putchar('B');
		x--;
	}
	if (x > 1)
		ft_putchar('C');
	ft_putchar('\n');
}

void	ft_interval_line(int i)
{
	ft_putchar('B');
	while (i > 2)
	{
		ft_putchar(' ');
		i--;
	}
	if (i > 1)
		ft_putchar('B');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_first_last_line(x);
		while (y > 2)
		{
			ft_interval_line(x);
			y--;
		}
		if (y > 1)
			ft_first_last_line(x);
	}
}
