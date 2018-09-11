/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 18:23:04 by bcasper           #+#    #+#             */
/*   Updated: 2018/08/28 18:25:11 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	char	*dest_ptr;

	dest_ptr = dest;
	while (*dest_ptr)
		dest_ptr++;
	i = 0;
	while (*(src + i))
	{
		dest_ptr[i] = src[i];
		i++;
	}
	dest_ptr[i] = '\0';
	return (dest);
}
