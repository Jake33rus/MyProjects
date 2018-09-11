/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 15:16:19 by bcasper           #+#    #+#             */
/*   Updated: 2018/08/30 12:34:32 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *mas;

	mas = NULL;
	if (min >= max)
		return (mas);
	if (!(mas = (int *)malloc(sizeof(int) * (max - min))))
		return (mas);
	i = 0;
	while (i < max - min)
	{
		mas[i] = (min + i);
		i++;
	}
	return (mas);
}
