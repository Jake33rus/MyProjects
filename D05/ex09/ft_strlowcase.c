/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 18:21:43 by bcasper           #+#    #+#             */
/*   Updated: 2018/08/28 18:23:55 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char *str_ptr;

	str_ptr = str;
	while (*str_ptr)
	{
		if (*str_ptr >= 'A' && *str_ptr <= 'Z')
			*str_ptr = *str_ptr + 32;
		str_ptr++;
	}
	return (str);
}
