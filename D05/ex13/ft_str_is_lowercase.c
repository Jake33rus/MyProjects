/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 18:22:32 by bcasper           #+#    #+#             */
/*   Updated: 2018/08/28 18:24:04 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int		ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!ft_char_is_lowercase(*str))
			return (0);
		str++;
	}
	return (1);
}
