/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoryan <igoryan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:51:31 by ibondarc          #+#    #+#             */
/*   Updated: 2024/11/13 21:03:27 by igoryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void push_swap(int ac, char **av)
{
    t_list *stack_a;
    t_list *temp;
    int i;
    int num;
    
    i = 1;
    stack_a = NULL;
    while (i < ac)
    {
        num = ft_atoi(av[i]);
        if ((num == 0 && av[i][1] != '\0') || has_duplicate(stack_a, num))
        {
            printf("Error\n");
            break ;   
        }
        temp = ft_lstnew(num);            
        ft_lstadd_back(&stack_a, temp);
        i++;
    }
}
int main(int ac, char **av)
{
    if (ac > 3)
    {
        if (!ft_isdigit(ac, av))
            return (printf("Error"), 1);
        push_swap(ac, av);
    }
    else
        printf("Error");
    printf("\n");
    return (0);
}
