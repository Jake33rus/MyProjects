/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 11:02:37 by bcasper           #+#    #+#             */
/*   Updated: 2018/09/06 11:02:39 by bcasper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDES_H
# define INCLUDES_H

# include <unistd.h>
# include <fcntl.h>
# define BUF_SIZE 4096

void	ft_display_file(char *filename);
int		is_error(int argc);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_puterror(char *str);
#endif
