/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <aboussab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 12:03:02 by aboussab          #+#    #+#             */
/*   Updated: 2026/02/02 16:21:05 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **head)
{
	t_list	*node2;

	if (!head || !(*head) || !(*head)-> next)
		return ;
	node2 = (*head)-> next;
	(*head)-> next = node2 -> next;
	node2 -> next = (*head);
	*head = node2;
}

void	sa(t_list **head)
{
	swap(head);
	write(1, "sa\n", 3);
}

void	sb(t_list **head)
{
	swap(head);
	write(1, "sb\n", 3);
}

void	ss(t_list **stack_a, t_list**stack_b)
{
	swap(stack_a);
	swap(stack_b);
	write(1, "ss\n", 3);
}
