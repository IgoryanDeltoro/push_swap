/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoryan <igoryan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 02:27:54 by igoryan           #+#    #+#             */
/*   Updated: 2024/11/14 03:07:37 by igoryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void    ft_ra(t_list **lst_a)
{
    t_list data;
    
    if (!lst_a)
        return ;
    printf("ra\n");
    data = (*lst_a);
    while ((*lst_a) != NULL)
    {
        (*lst_a) = (*lst_a)->next;
    }
    (*lst_a) = data;
    (*lst_a)->next = NULL;
}