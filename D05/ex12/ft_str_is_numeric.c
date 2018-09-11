/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 18:22:19 by bcasper           #+#    #+#             */
/*   Updated: 2018/08/28 18:24:02 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int		ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!ft_char_is_numeric(*str))
			return (0);
		str++;
	}
	return (1);
}
