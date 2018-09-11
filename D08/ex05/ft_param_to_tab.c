/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 19:52:44 by bcasper           #+#    #+#             */
/*   Updated: 2018/08/31 16:45:47 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int						ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

struct s_stock_par		*ft_param_to_tab(int ac, char **av)
{
	int			i;
	int			j;
	t_stock_par	*arr;

	arr = (t_stock_par *)malloc(sizeof(t_stock_par) * (ac + 1));
	i = -1;
	while (++i < ac)
	{
		arr[i].size_param = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = (char *)malloc(sizeof(char) * (arr[i].size_param + 1));
		j = -1;
		while (++j < arr[i].size_param)
			arr[i].copy[j] = av[i][j];
		arr[i].copy[j] = '\0';
		arr[i].tab = ft_split_whitespaces(av[i]);
	}
	arr[i].str = 0;
	return (arr);
}
