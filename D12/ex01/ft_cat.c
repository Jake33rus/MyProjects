/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 11:04:57 by bcasper           #+#    #+#             */
/*   Updated: 2018/09/06 20:49:32 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

void	ft_handle_errors(char *argv, char *name)
{
	if (errno == EISDIR)
	{
		ft_putstr(name, 2);
		ft_putstr(": ", 2);
		ft_putstr(argv, 2);
		ft_putstr(": Is a directory\n", 2);
	}
	else if (errno == ENOENT)
	{
		ft_putstr(name, 2);
		ft_putstr(": ", 2);
		ft_putstr(argv, 2);
		ft_putstr(": No such file or directory\n", 2);
	}
}

void	ft_stdin_input(void)
{
	int		len;
	char	buf[BUF_SIZE];

	while ((len = read(0, &buf, BUF_SIZE)) != 0)
		write(1, &buf, len);
}

int		main(int argc, char **argv)
{
	int		i;
	int		len;
	int		fd;
	char	buf[BUF_SIZE];

	i = 0;
	if (argc == 1)
		ft_stdin_input();
	while (++i < argc)
	{
		fd = open(argv[i], O_RDWR);
		if (fd < 0)
		{
			ft_handle_errors(argv[i], argv[0]);
			return (0);
		}
		while ((len = read(fd, &buf, BUF_SIZE)) != 0)
			write(1, &buf, len);
		close(fd);
	}
	return (0);
}
