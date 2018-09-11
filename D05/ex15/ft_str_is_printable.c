/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 18:22:57 by bcasper           #+#    #+#             */
/*   Updated: 2018/08/28 18:24:07 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

int		ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!ft_char_is_printable(*str))
			return (0);
		str++;
	}
	return (1);
}
