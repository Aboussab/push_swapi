/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sotring_algo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <aboussab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 08:46:20 by aboussab          #+#    #+#             */
/*   Updated: 2026/02/04 13:33:24 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	step_pushinb(t_list **a,t_list **b,int chunk)
{
	t_list	*node;
	int	pushed;

	pushed = 0;
	while ((*a))
	{
		node = (*a);
		if (node -> index <= pushed)
		{
			pb(a,b);
			rb(b);
			pushed++;
		}
		else if (node -> index <= pushed + chunk)
		{
			pb(a,b);
			pushed++;
		}
		else
			ra(a);
	}
}
void	indexing_node(t_list *b)
{
	int	index;
	t_list	*ptr;

	ptr = b;
	index = 0;
	while (ptr)
	{
		ptr -> index = index;
		index++;
		ptr = ptr -> next;
	}
}
int	bring_biger(t_list *b)
{
	int	max;
	int	index;

	indexing_node(b);
	max = b -> nmb;
	index = b -> index;
	while (b)
	{
		if (max < b -> nmb)
		{
			max = b -> nmb;
			index = b -> index;
		}
		b = b -> next;
	}
	return (index);
}void	simplest_move_b(t_list **b,int index)
{
	int		i;
	int		rotate;
	t_list	*node;

	node = (*b);
	i = ft_lstsize(node);
	if(index <= (i/2))
	{
		while(index >= 1)
		{
			rb(b);
			index--;
		}	
	}
	else
	{
		rotate = i - index;
		while (rotate > 0)
		{
			rrb(b);
			rotate--;
		}
	}
}
void	push_a(t_list **a, t_list **b)
{
	int	index;

	while (*b)
	{
		index = bring_biger(*b);
		simplest_move_b(b,index);
		pa(b,a);
	}
}


void	sorting_algo(t_list **a,t_list **b, int chunk)
{
	sorted_index_staack((*a));
	step_pushinb(a,b,chunk);
	push_a(a,b);
}

