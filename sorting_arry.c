/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_arry.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 18:01:09 by marvin            #+#    #+#             */
/*   Updated: 2026/02/07 18:01:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_arry(int *arry, int size)
{
	int	i;
	int	j;
	int	i_min;
	int	tmp;

	j = 0;
	while (j < (size - 1))
	{
		i_min = j;
		i = j + 1;
		while (i < size)
		{
			if (arry[i] < arry[i_min])
				i_min = i;
			i++;
		}
		tmp = arry[j];
		arry[j] = arry[i_min];
		arry[i_min] = tmp;
		j++;
	}
}

void	indexing_stack(t_list *a, int *arry)
{
	int	size;
	int	i;

	size = ft_lstsize(a);
	while (a)
	{
		i = 0;
		while (i <= (size - 1))
		{
			if ((a -> nmb) == arry[i])
			{
				a -> index = i;
				break ;
			}
			i++;
		}
		a = a -> next;
	}
}

int	sorted_index_staack(t_list *a)
{
	t_list	*node;
	int		*arry;
	int		size;
	int		i;

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
	sort_arry(arry, size);
	indexing_stack(a, arry);
	free(arry);
	return (i);
}
