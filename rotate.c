/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <aboussab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 11:31:38 by aboussab          #+#    #+#             */
/*   Updated: 2026/02/02 16:22:07 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **head)
{
	t_list	*node1;
	t_list	*ptr;

	node1 = *head ;
	ptr = *head ;
	*head = node1 -> next;
	while ((ptr -> next) != NULL)
		ptr = ptr -> next;
	ptr -> next = node1;
	node1 -> next = NULL;
}

void	ra(t_list **head)
{
	rotate(head);
	write(1, "ra\n", 3);
}

void	rb(t_list **head)
{
	rotate(head);
	write(1, "rb\n", 3);
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	write(1, "rr\n", 3);
}
