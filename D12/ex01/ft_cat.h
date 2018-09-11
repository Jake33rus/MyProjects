/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 20:37:44 by bcasper           #+#    #+#             */
/*   Updated: 2018/09/06 20:50:46 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H

# include <unistd.h>
# include <fcntl.h>
# include <errno.h>

# define BUF_SIZE 27000

void	ft_handle_errors(char *argv, char *name);
void	ft_stdin_input(void);
void	ft_putchar(char c, int fd);
void	ft_putstr(char *str, int fd);
#endif
