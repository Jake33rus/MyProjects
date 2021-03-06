/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 21:08:25 by bcasper           #+#    #+#             */
/*   Updated: 2018/09/03 21:14:06 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int res;

	res = 0;
	i = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			res++;
		i++;
	}
	return (res);
}
