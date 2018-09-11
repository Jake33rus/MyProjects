/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 18:22:10 by bcasper           #+#    #+#             */
/*   Updated: 2018/08/28 18:24:00 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_is_alpha(char c)
{
	if ((c >= 'A' && c <= 'Z')
	|| (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

int		ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!ft_char_is_alpha(*str))
			return (0);
		str++;
	}
	return (1);
}
