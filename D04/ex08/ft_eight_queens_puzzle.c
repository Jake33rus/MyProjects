/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 13:24:51 by bcasper           #+#    #+#             */
/*   Updated: 2018/08/25 20:56:55 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_try_queen(int col, int diag, int board[8][8], int size)
{
	int i;

	i = -1;
	while (++i < col)
		if (board[i][diag])
			return (0);
	i = 0;
	while (++i <= col && diag - i >= 0)
		if (board[col - i][diag - i])
			return (0);
	i = 0;
	while (++i <= col && diag + i < size)
		if (board[col - i][diag + i])
			return (0);
	return (1);
}

void	ft_set_queen(int col, int board[8][8], int *res_count)
{
	int i;

	if (col == 8)
	{
		(*res_count)++;
		return ;
	}
	i = -1;
	while (++i < 8)
	{
		if (ft_try_queen(col, i, board, 8))
		{
			board[col][i] = 1;
			ft_set_queen(col + 1, board, res_count);
			board[col][i] = 0;
		}
	}
	return ;
}

void	ft_init_table(int table[8][8])
{
	int i;
	int j;

	i = -1;
	while (++i < 8)
	{
		j = -1;
		while (++j < 8)
		{
			table[i][j] = 0;
		}
	}
}

int		ft_eight_queens_puzzle(void)
{
	int res_count;
	int board[8][8];

	res_count = 0;
	ft_init_table(board);
	ft_set_queen(0, board, &res_count);
	return (res_count);
}
