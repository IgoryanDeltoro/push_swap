/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoryan <igoryan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 02:21:06 by igoryan           #+#    #+#             */
/*   Updated: 2024/11/14 02:21:44 by igoryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void    ft_sb(t_list *lst_b)
{
    int temp;
    
    if (!lst_b)
        return ;
    printf("sb\n");
    temp = lst_b->data;
    lst_b->data = lst_b->next->data;
    lst_b->next->data = temp;
}