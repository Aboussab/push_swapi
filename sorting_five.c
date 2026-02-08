/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorthing_five.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <aboussab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 18:28:40 by aboussab          #+#    #+#             */
/*   Updated: 2026/02/02 15:54:23 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	simplest_move_a(t_list **a,int index)
{
	int		i;
	int		rotate;
	t_list	*node;

	node = (*a);
	i = ft_lstsize(node);
	if(index <= (i/2))
	{
		while(index >= 1)
		{
			ra(a);
			index--;
		}	
	}
	else
	{
		rotate = i - index;
		while (rotate > 0)
		{
			rra(a);
			rotate--;
		}
	}
}
void bring_min(t_list **a,t_list **b)
{
	t_list	*node;
	int		min;
	size_t		index;
	size_t		index_min;

	node = (*a) -> next;
	min = (*a) -> nmb;
	index = 1;
	index_min = 0;
	while(node != NULL)
	{
		if(min > (node -> nmb))
		{
			min = node -> nmb;
			index_min = index;
		}
		index++;
		node = node -> next;
	}
	simplest_move_a(a,index_min);
	pb(a,b);
}
void	sorting_five(t_list	**a,t_list	**b)
{
	bring_min(a,b);
	bring_min(a,b);
	sorting_three(a);
	pa(b,a);
	pa(b,a);
	
}

