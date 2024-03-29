/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvalette <bvalette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 15:38:06 by bvalette          #+#    #+#             */
/*   Updated: 2020/06/27 15:39:29 by bvalette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

# include <unistd.h>

typedef struct		s_list
{
	void			*data;
	struct s_list	*next;
}					t_list;

extern int			ft_strlen(char const *str);
extern ssize_t		ft_read(int fd, void *buf, size_t count);
extern ssize_t		ft_write(int fd, const void *buf, size_t count);
extern int			ft_strcmp(const char *s1, const char *s2);
extern char			*ft_strcpy(char *dest, const char *src);
extern char			*ft_strdup(const char *s);

/*
**  BONUS PART
*/

extern int			ft_atoi_base(const char *str, char *base);
extern void			ft_list_push_front(t_list **begin_list, void *data);
extern void			ft_list_remove_if(t_list **begin_list, void *data_ref,
										int (*cmp)(), void (*free_fct)(void *));
extern int			ft_list_size(t_list *begin_list);
extern void			ft_list_sort(t_list **begin_list, int (*cmp)());

#endif
