/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoryan <igoryan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:55:57 by ibondarc          #+#    #+#             */
/*   Updated: 2024/11/14 02:59:44 by igoryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				data;
	struct s_list	*next;
}					t_list;

///                 Utils
int					ft_atoi(const char *nptr);
int					ft_isdigit(int ac, char **av);
int					ft_strcmp(char *s1, char *s2);
int					has_duplicate(t_list *lst, int new_value);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstclean(t_list **lst);
t_list				*ft_lstnew(int num);
t_list				*ft_lstlast(t_list *lst);
////                Actions
void				ft_sa(t_list *lst_a);
void				ft_sb(t_list *lst_b);
void				ft_ss(t_list *lst_a, t_list *lst_b);
void				ft_ra(t_list **lst_a);

#endif