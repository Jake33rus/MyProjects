/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 15:33:19 by bcasper           #+#    #+#             */
/*   Updated: 2018/08/28 18:22:49 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int j;

	argc--;
	while (argc != 0)
	{
		j = 0;
		while (argv[argc][j])
		{
			ft_putchar(argv[argc][j]);
			j++;
		}
		ft_putchar('\n');
		argc--;
	}
	return (0);
}
