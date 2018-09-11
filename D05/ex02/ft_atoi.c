/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 18:20:21 by bcasper           #+#    #+#             */
/*   Updated: 2018/08/28 18:23:44 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int result;
	int sign;

	while (*str == ' ' || *str == '\t' || *str == '\r' || *str == '\n'
		|| *str == '\v' || *str == '\f')
		str++;
	sign = 1;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	if (*str == '+')
		str++;
	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + sign * (*str - '0');
		str++;
	}
	return (result);
}
