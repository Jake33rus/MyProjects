/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 19:03:06 by bcasper           #+#    #+#             */
/*   Updated: 2018/08/30 15:24:44 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_size;

	i = 0;
	dest_size = 0;
	while (dest[dest_size])
		dest_size++;
	while (src[i])
	{
		dest[dest_size] = src[i];
		dest_size++;
		i++;
	}
	dest[dest_size] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		len;

	i = 1;
	len = 0;
	while (i < argc)
	{
		len += (ft_strlen(argv[i++]) + 1);
	}
	str = (char *)malloc(sizeof(char) * len);
	i = 1;
	while (i < argc)
	{
		ft_strcat(str, argv[i]);
		if (i != argc - 1)
			ft_strcat(str, "\n");
		i++;
	}
	str[len] = '\0';
	return (str);
}
