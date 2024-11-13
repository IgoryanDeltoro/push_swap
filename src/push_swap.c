/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoryan <igoryan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:51:31 by ibondarc          #+#    #+#             */
/*   Updated: 2024/11/13 21:53:44 by igoryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int push_swap(t_list **lst, int ac, char **av)
{
    t_list *temp;
    int i;
    int num;
    
    i = 1;
    while (i < ac)
    {
        num = ft_atoi(av[i]);
        if ((num == 0 && av[i][1] != '\0') || has_duplicate(*lst, num))
            return (0);
        temp = ft_lstnew(num);            
        ft_lstadd_back(&(*lst), temp);
        i++;
    }
    return (1);
}
int main(int ac, char **av)
{
    t_list *stack_a;
    int res;

    if (ac > 3)
    {
        stack_a = NULL;
        if (!ft_isdigit(ac, av))
            return (printf("Error"), 1);
        res = push_swap(&stack_a, ac, av);
        if (!res)
        {
            printf("Error");
            ft_lstclean(&stack_a);
        }
        while (stack_a != NULL)
        {
            printf("[%d]\n", stack_a->data);
            stack_a = stack_a->next;
        }
    }
    else
        printf("Error");
    printf("\n");
    return (0);
}
