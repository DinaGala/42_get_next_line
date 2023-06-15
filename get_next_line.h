/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 16:11:50 by nzhuzhle          #+#    #+#             */
/*   Updated: 2023/06/15 18:18:32 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 24
# endif

typedef struct s_list
{
	char			*content;
	struct s_list	*next;
}	t_list;

/**** get_next_line.c ****************************************/

char	*get_next_line(int fd);
void	read_to_buf(int fd, t_list **list, long *lenth);
long	save_to_list(t_list **list, char *buf, long bytes);
void	add_to_string(t_list *list, char *str, long lenth);
int		clean_list(t_list **list);

/**** get_next_line_utils.c *********************************/

int		check_line(t_list *node, long *lenth);
void	*free_all(t_list **list, char *str);
t_list	*last_node(t_list *list);
size_t	str_lenth(char *str);
char	*rest_str(char *last);

#endif
