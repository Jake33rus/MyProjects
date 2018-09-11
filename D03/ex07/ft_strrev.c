/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 21:07:25 by bcasper           #+#    #+#             */
/*   Updated: 2018/08/24 20:57:01 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		size;
	int		i;
	char	tmp;

	size = 0;
	i = 0;
	while (str[size] != '\0')
		size++;
	size -= 1;
	while (i < size)
	{
		tmp = str[size];
		str[size] = str[i];
		str[i] = tmp;
		i++;
		size--;
	}
	return (str);
}
