/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 13:19:19 by ihahn             #+#    #+#             */
/*   Updated: 2018/09/02 13:19:49 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_line(char **tab, char nb, int x)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (tab[x][i] == nb)
			return (0);
		i++;
	}
	return (1);
}

int		ft_check_column(char **tab, char nb, int y)
{
	int	i;

	i = 1;
	while (i <= 9)
	{
		if (tab[i][y] == nb)
			return (0);
		i++;
	}
	return (1);
}

int		ft_check_block(char **tab, int x, int y, char nb)
{
	int i;
	int j;

	i = -1;
	if (x <= 3)
		x = 1;
	else if (x <= 6)
		x = 4;
	else if (x <= 9)
		x = 7;
	y = y - (y % 3);
	while (++i < 3)
	{
		j = -1;
		while (++j < 3)
		{
			if (tab[x][y] == nb)
				return (0);
			y++;
		}
		y = y - 3;
		x++;
	}
	return (1);
}

int		ft_check_table(int n, char **tab)
{
	int i;
	int j;

	i = 0;
	if (n == 10)
	{
		while (++i <= 9)
		{
			j = 0;
			while (tab[i][j])
			{
				if ((tab[i][j] < '0' || tab[i][j] > '9') && tab[i][j] != '.')
					return (0);
				j++;
			}
			if (j != 9)
				return (0);
		}
		return (1);
	}
	else
		return (0);
}
