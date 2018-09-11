/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 18:23:33 by bcasper           #+#    #+#             */
/*   Updated: 2018/08/28 18:25:15 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int		ft_base_check(char *base)
{
	int i;
	int j;
	int len;

	len = ft_strlen(base);
	if (len < 2)
		return (0);
	i = 0;
	while (*(base + i))
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] > 126)
			return (0);
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		divider;
	long	n;

	if (!ft_base_check(base))
		return ;
	divider = ft_strlen(base);
	n = nbr;
	if (n < 0)
	{
		ft_putchar('-');
		n *= (-1);
	}
	if (n > divider - 1)
	{
		ft_putnbr_base(n / divider, base);
		ft_putnbr_base(n % divider, base);
	}
	else
		ft_putchar(base[n % divider]);
}
