/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoryan <igoryan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:51:31 by ibondarc          #+#    #+#             */
/*   Updated: 2024/11/14 03:00:04 by igoryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void print_stack(t_list *lst)
{
    while (lst != NULL)
    {
        printf("[%d]\n", lst->data);
        lst = lst->next;
    }
}

static int push_swap(t_list **lst, int ac, char **av)
{
    t_list *temp;
    int i;
    int num;
    
    i = 1;
    while (i < ac)
    {
        num = ft_atoi(av[i]);
        if ((num == 0 && av[i][0] != 48) || has_duplicate(*lst, num))
            return (0);
        temp = ft_lstnew(num);            
        ft_lstadd_back(&(*lst), temp);
        i++;
    }
    ft_ra(&(*lst));
    return (1);
}
int main(int ac, char **av)
{
    t_list *stack_a;
    int res;

    if (ac > 3)
    {
        stack_a = NULL;
        res = push_swap(&stack_a, ac, av);
        if (!res)
        {
            printf("Error");
            ft_lstclean(&stack_a);
        }
        print_stack(stack_a);
    }
    else
        printf("Error");
    printf("\n");
    return (0);
}
