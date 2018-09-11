/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 19:53:07 by bcasper           #+#    #+#             */
/*   Updated: 2018/09/09 21:41:33 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <stdlib.h>
# include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_show_result(int row, int col, int count, int i);
char	*ft_conversion_to_line(int *row, int *col);
void	ft_definition_rush(char *str, int row, int col);
char	*ft_create_rush0(int w, int h);
char	*ft_create_rush1(int w, int h);
char	*ft_create_rush2(int w, int h);
char	*ft_create_rush3(int w, int h);
char	*ft_create_rush4(int w, int h);
char	ft_pos0(int col, int row, int w, int h);
char	ft_pos1(int col, int row, int w, int h);
char	ft_pos2(int col, int row, int w, int h);
char	ft_pos3(int col, int row, int w, int h);
char	ft_pos4(int col, int row, int w, int h);
int		ft_strlen(char *str);
#endif
