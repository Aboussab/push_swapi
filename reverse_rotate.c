/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <aboussab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 11:32:45 by aboussab          #+#    #+#             */
/*   Updated: 2026/02/02 16:22:29 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_list **head)
{
	t_list	*last_node;
	t_list	*node_l;

	 if (!head || !*head || !(*head)->next)
        return;
	last_node = (*head)-> next;
	node_l = (*head);
	while ((last_node -> next) != NULL)
	{
		node_l = node_l -> next;
		last_node = last_node -> next;
	}
	node_l -> next = NULL;
	last_node -> next = (*head);
	*head = last_node;
}

void	rra(t_list **head)
{
	reverse_rotate(head);
	write(1, "rra\n", 4);
}

void	rrb(t_list **head)
{
	reverse_rotate(head);
	write(1, "rrb\n", 4);
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	write(1, "rrr\n", 4);
}
