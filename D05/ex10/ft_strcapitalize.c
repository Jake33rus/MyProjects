/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 18:21:58 by bcasper           #+#    #+#             */
/*   Updated: 2018/08/28 18:23:56 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_alpha_numeric(char c)
{
	if ((c >= 'A' && c <= 'Z')
	|| (c >= 'a' && c <= 'z')
	|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	char *str_ptr;

	str_ptr = str;
	while (*str_ptr)
	{
		if (ft_alpha_numeric(*str_ptr))
		{
			if (*str_ptr >= 'a' && *str_ptr <= 'z')
				*str_ptr = *str_ptr - 32;
			str_ptr++;
			while (ft_alpha_numeric(*str_ptr))
			{
				if (*str_ptr == '\0')
				{
					str_ptr--;
					break ;
				}
				if (*str_ptr >= 'A' && *str_ptr <= 'Z')
					*str_ptr = *str_ptr + 32;
				str_ptr++;
			}
		}
		str_ptr++;
	}
	return (str);
}
