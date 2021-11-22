/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjeong <jjeong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 11:32:14 by jjeong            #+#    #+#             */
/*   Updated: 2021/06/14 11:32:38 by jjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 98
# endif

# ifndef OPEN_MAX
#  define OPEN_MAX 1024
# endif

int		proccess_line(int result, char **line);
void	alloc_line_all(unsigned char **str, char **line);
int		get_next_line(int fd, char **line);

#endif
