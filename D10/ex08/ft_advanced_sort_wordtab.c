/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 17:36:42 by bcasper           #+#    #+#             */
/*   Updated: 2018/09/04 17:38:28 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_swap(char **str1, char **str2)
{
	char	*tmp;

	tmp = *str1;
	*str1 = *str2;
	*str2 = tmp;
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		j;
	int		i;
	int		lenght;
	char	**tmp;

	tmp = tab;
	lenght = 0;
	while (*tmp)
	{
		lenght++;
		tmp++;
	}
	i = -1;
	while (++i < lenght)
	{
		j = lenght;
		while (--j > i)
			if (cmp(tab[j - 1], tab[j]) > 0)
				ft_swap(&tab[j - 1], &tab[j]);
	}
}
