/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsarkoh <fsarkoh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 19:02:46 by fsarkoh           #+#    #+#             */
/*   Updated: 2023/01/06 16:25:25 by fsarkoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <stddef.h>
# include <unistd.h>

char	*get_next_line(int fd);

char	*malloc_buff(void);
char	*ft_strjoin(const char *line_buff, const char *next_buff);
size_t	ft_strlen(const char *s, int term);
char	*ft_strchr(const char *s, int c);
char	*free_and_return(char **buff, char **buff2);
#endif