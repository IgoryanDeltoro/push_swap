#include "../../includes/push_swap.h"

void	ft_rra(t_list **lst_a)
{
	t_list	last;
	t_list	temp;
	
	if (!(*lst_a) || !(*lst_a)->next)
		return ;
	while ((*lst_a)->next != NULL)
		*lst_a = (*lst_a)->next;
	last = (*lst_a)->next;
	last->next = *lst_a;
}
