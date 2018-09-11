/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 18:20:43 by bcasper           #+#    #+#             */
/*   Updated: 2018/08/28 18:23:49 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *haystack;
	char *needle;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			haystack = str;
			needle = to_find;
			while (*needle == *haystack)
			{
				haystack++;
				needle++;
			}
			if (!(*needle))
				return (str);
		}
		str++;
	}
	return (0);
}
