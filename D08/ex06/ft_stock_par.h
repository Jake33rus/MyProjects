/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 16:33:27 by bcasper           #+#    #+#             */
/*   Updated: 2018/08/31 16:34:32 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

typedef struct	s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}				t_stock_par;

void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);
char			**ft_split_whitespaces(char *str);
void			ft_put_tab(char **tab);
void			ft_show_tab(t_stock_par *par);
t_stock_par		*ft_param_to_tab(int ac, char **av);
#endif
