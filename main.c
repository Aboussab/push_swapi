/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <aboussab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 11:43:07 by aboussab          #+#    #+#             */
/*   Updated: 2026/02/04 13:32:53 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc,char **argv)
{
	t_list *head1;int	i = 0;
	t_list *head;
	t_list *stack_b = NULL;

	
head = combnitiones(argc,argv);
if(!head)
	return (0);
// sorting_algo(&head, &stack_b, 2);
sorting_five(&head,&stack_b);
head1 = head;
while (head1 != NULL)
{
	printf("stack_a");
	printf("node %d :  %d\n",i,head1 -> nmb);
	head1 = head1 -> next;
	i++;
}
// printf("%d\n",bring_biger(head));
// push_a(&stack_b,&head);
// printf("--------------------affiche what is on stack_b------------------------------------\n");
// 	head1 = stack_b;
// 	while (head1 != NULL)
// 	{
// 		printf("stack_b");
// 		printf("node %d :  %d\n",i,head1 -> nmb);
// 		head1 = head1 -> next;
// 		i++;
// 	}
	ft_lstclear(&head);
	ft_lstclear(&stack_b);
	return (0);
}