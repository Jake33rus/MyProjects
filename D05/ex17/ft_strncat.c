/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 18:23:12 by bcasper           #+#    #+#             */
/*   Updated: 2018/08/28 18:25:12 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int		i;
	char	*dest_ptr;

	dest_ptr = dest;
	while (*dest_ptr)
		dest_ptr++;
	i = 0;
	while (i < nb)
	{
		if (!src[i])
			break ;
		dest_ptr[i] = src[i];
		i++;
	}
	dest_ptr[i] = '\0';
	return (dest);
}
