/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 18:21:33 by bcasper           #+#    #+#             */
/*   Updated: 2018/08/28 18:23:54 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char *str_ptr;

	str_ptr = str;
	while (*str_ptr)
	{
		if (*str_ptr >= 'a' && *str_ptr <= 'z')
			*str_ptr = *str_ptr - 32;
		str_ptr++;
	}
	return (str);
}
