/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 21:21:24 by bcasper           #+#    #+#             */
/*   Updated: 2018/09/06 11:00:46 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

void	ft_display_file(char *filename)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(filename, O_RDONLY);
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
}

int		is_error(int argc)
{
	if (argc == 1)
	{
		ft_puterror("File name missing.\n");
		return (0);
	}
	else if (argc > 2)
	{
		ft_puterror("Too many arguments.\n");
		return (0);
	}
	return (1);
}

int		main(int argc, char **argv)
{
	if (!(is_error(argc)))
		return (1);
	ft_display_file(argv[1]);
	return (0);
}
