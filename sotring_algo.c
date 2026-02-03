/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sotring_algo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <aboussab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 08:46:20 by aboussab          #+#    #+#             */
/*   Updated: 2026/02/03 19:17:21 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	Find_Position(t_list **a,int nmbr)
{
	t_list	*node;
	size_t		index;
	size_t		index_node;

	node = (*a) -> next;
	index = 1;
	while(node != NULL)
	{
		if(nmbr == (node -> nmb))
		{
			index_node = index;
		}
		index++;
		node = node -> next;
	}
	return (index_node);
}
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
int	find_median(t_list *a)
{
	int	*arry;
	int size;
	int	i;

	size = ft_lstsize(a);
	i = 0;
	arry = (int *)malloc(size * sizeof(int));
	if (!arry)
		return (0);
	while (a)
	{
		arry[i] = a -> nmb;
		a = a -> next;
		i++;  
	}
	sort_arry(arry,size);
	i = size/2;
	i = arry[i];
	free(arry);
	return (i);
}
void	sort_algo(t_list **a,t_list **b)
{
	int	median;
	int	i;
	int	size;

	size = ft_lstsize((*a));
	median = find_median((*a));
	pb(a,b);
	pb(a,b);
	i = 0;
	while (i <= (size - 3))
	{
		pb(a,b);
		if (((*a) -> nmb) < median)
			rb(b);
		i++;
		(*a) = (*a) -> next;
	}
	sorting_three(a);
}

int	fct_targe_node(t_list **a,t_list **b)
{
	int	index;
	int	index_node;
	t_list	*list;

	list = (*b);
	index = 1;
	while (*a)
	{
		if (((list ->nmb) > ((*a)->nmb)) && ((list ->nmb) < ((*a) -> next -> nmb)))
			index_node = index;
		(*a) = (*a) -> next;
		index++;
	}
	return (index_node);
}
int	cast_opert()
{
	
	
}


