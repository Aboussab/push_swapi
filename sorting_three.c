/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <aboussab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:40:53 by aboussab          #+#    #+#             */
/*   Updated: 2026/02/01 13:33:14 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sorting_two(t_list **head)
{
	if (((*head) -> nmb) > ((*head) -> next -> nmb))
		sa(head);
}
void sorting_three(t_list **head)
{
	t_list	*node;
	int		max;

	max = (*head) -> nmb;
	node  = (*head) ->next;
	if ((max > (node -> nmb)) && (max > (node -> next -> nmb)))
	{
		ra(head);
		if ((node -> nmb) >  (node -> next -> nmb))
			sa(head);
		return;
	}
	max = node -> next  -> nmb;
	if ((max > ((*head) -> nmb)) && (max > (node -> nmb)))
	{
		if (((*head)-> nmb) >  (node -> nmb))
			sa(head);
		return;
	}
	max = node -> nmb;
	if ((max > ((*head) -> nmb)) && (max > (node -> next -> nmb)))
	{
		rra(head);
		if (((*head) -> nmb) > ((*head) -> next -> nmb))
			sa(head);
	}
}
