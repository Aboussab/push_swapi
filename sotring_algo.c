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

void	sort_arry(int *arry,int size)
{
	int	i;
	int	j;
	int	i_min;
	int	tmp;

	j = 0;
	while (j < size - 1)
	{
		 i_min=j;
		 i = j + 1;
		while (i < size)
		{
			if(arry[i]<arry[i_min])
				i_min=i;
			i++;
		}
		tmp=arry[j];
		arry[j]=arry[i_min];
		arry[i_min]=tmp;
		j++;
	}
}
void	indexing_stack(t_list *a,int *arry)
{
	int size;
	int i;

	size = ft_lstsize(a);
	while (a)
	{
		i = 0;
		while (i <= (size - 1))
		{
			if((a -> nmb) == arry[i])
			{
				a -> index = i;
				break;
			}
			i++;
		}
		a = a -> next;
	}
}
int	sorted_index_staack(t_list *a)
{
	t_list *node;
	int	*arry;
	int size;
	int	i;

	size = ft_lstsize(a);
	i = 0;
	node = a;
	arry = (int *)malloc(size * sizeof(int));
	if (!arry)
		return (0);
	while (node)
	{
		arry[i] = node -> nmb;
		node = node -> next;	
		i++;  
	}
	sort_arry(arry,size);
	indexing_stack(a,arry);
	free(arry);
	return (i);
}
int	count_chunk(t_list **a,int chunk)
{
	t_list	*node;
	size_t		chunk_count;

	node = (*a);
	chunk_count = 0;
	while(node != NULL)
	{
		if((node -> index) < chunk)
		{
			chunk_count++;
		}
		node = node -> next;
	}
	return (chunk_count);
}
void	step_pushinb(t_list **a,t_list **b,int chunk)
{
	int	limit;
	int	chunk_count;
	int	size;

	size = ft_lstsize((*a));
	limit = 0;
	sorted_index_staack((*a));
	while (ft_lstsize(*a) > 3)
	{
		chunk_count = count_chunk(a,chunk);
		limit += chunk;
		while (chunk_count > 0)
		{
			if (((*a) -> index) <= limit)
			{
				pb(a,b);
				chunk_count--;
			}
			else
				ra(a);
		}
	}
	sorting_three(a);
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
void	bring_biger_to_a(t_list **a,t_list **b)
{
	t_list	*node;
	int		max;
	int		size;
	int		index_b;
	int		i;

	while (ft_lstsize((*b)) > 0)
	{
		node = (*b);
		max = (*b) -> index;
		i = 0;
		while (node)
		{
			if (max <  (node -> index))
			{
				max = (node -> index);
				index_b = i;
			}
			i++;
			node = node -> next;
		}
		simplest_move_b(b,index_b);
		pa(b,a);
	}
}
void	sorting_algo(t_list **a,t_list **b, int chunk)
{
	step_pushinb(a,b,chunk);
	bring_biger_to_a(a,b);
	simplest_move_a(a,0);
}

