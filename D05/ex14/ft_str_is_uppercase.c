/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 18:22:39 by bcasper           #+#    #+#             */
/*   Updated: 2018/08/28 18:24:05 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int		ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!ft_char_is_uppercase(*str))
			return (0);
		str++;
	}
	return (1);
}
