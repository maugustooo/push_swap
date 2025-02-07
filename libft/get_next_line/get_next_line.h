/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maugusto <maugusto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:03:37 by maugusto          #+#    #+#             */
/*   Updated: 2024/05/27 15:32:41 by maugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif
# include <stdlib.h>
# include <sys/types.h>
# include <unistd.h>
# include <stdio.h>
# include "../libft.h"

char	*get_next_line(int fd);
char	*ft_strndup(char *s1, int len);
size_t	ft_strlentoc(char *s, char c);
char	*ft_strjoing(char *s1, char *s2);
char	*ft_gnlstrjoing(char *s1, char *s2);
#endif