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

// int	count_chunk(t_list **a,int chunk)
// {
// 	t_list	*node;
// 	size_t		chunk_count;

// 	node = (*a);
// 	chunk_count = 0;
// 	while(node != NULL)
// 	{
// 		if((node -> index) < chunk)
// 		{
// 			chunk_count++;
// 		}
// 		node = node -> next;
// 	}
// 	return (chunk_count);
// }
// int	bring_down_index(t_list **a,int limit)
// {
// 	t_list *end;
// 	int		index;
// 	int		i;
// 	int		size;

// 	i = 0;
// 	size = ft_lstsize(*a);
// 	end = (*a);
// 	while (i <= (size/2))
// 	{
// 		end = end -> next;
// 		i++;
// 	}
// 	while (end)
// 	{
// 		if ((end -> index) <= limit)
// 			index = (end -> index);
// 		end = end -> next;
// 	}
// 	index = (size + 1) - index; 
// 	return (index);
// }
// int	bring_up_index(t_list **a,int limit)
// {
// 	t_list *start;
// 	int		index;

// 	start = (*a);
// 	while (start)
// 	{
// 		if ((start -> index) <= limit)
// 		{
// 			index = (start -> index);
// 			break;
// 		}
// 		start = start -> next;
// 	}
// 	return (index);
// }
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
void	simplest_move_b(t_list **b,int index)
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
void	push_back_to_a_indexed(t_list **a,t_list **b)
{
	gitad
}


void	sorting_algo(t_list **a,t_list **b, int chunk)
{
	sorted_index_staack((*a));
	printf("koooooool");
	step_pushinb(a,b,chunk);
	push_back_to_a_indexed(a,b);
	//bring_biger_to_a(a,b);
	// simplest_move_a(a,0);
}

