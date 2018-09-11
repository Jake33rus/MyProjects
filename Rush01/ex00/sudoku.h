/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 13:22:05 by ihahn             #+#    #+#             */
/*   Updated: 2018/09/02 13:22:14 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_print(char **tab);
int		ft_check_line(char **tab, char nb, int x);
int		ft_check_column(char **tab, char nb, int y);
int		ft_check_block(char **tab, int x, int y, char nb);
int		ft_check_table(int n, char **tab);
int		ft_sudoku(char **tab, int position);
#endif
