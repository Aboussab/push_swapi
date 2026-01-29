/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <aboussab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:40:53 by aboussab          #+#    #+#             */
/*   Updated: 2026/01/29 18:06:00 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sorting_two(t_list *head)
{
	if ((head -> nmb) > (head -> next -> nmb))
		write(2,"sa",2);
}
void sorting_three(t_list *head)
{
	t_list	*node;
	int		max;

	max = head -> nmb;
	node  = head ->next;
	if ((max > (head -> nmb)) && (max > (head -> next -> nmb)))
	{
		if ((node -> nmb) >  (node -> next -> nmb))
			write(2,"sa",2);
		write(2,"rra",3);
		return ;
	}
	max = node -> nmb;
	if ((max < (head -> nmb)) && (max > (node -> next -> nmb)))
	{
		if ((node -> next -> nmb) > (head -> nmb))
			write(2,"sa",2);
		write(2,"rra",3);
		return ;
	}
	max = node -> next -> nmb;
	if ((max < (head -> nmb)) && (max > (node -> nmb)))
	{
		if ((head -> nmb) >  (node -> nmb))
			write(2,"sa",2);
	}
}
