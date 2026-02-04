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
	t_list *head1;
	t_list *head;
	t_list *stack_b = NULL;
	 int	i = 0;
	
	head = combnitiones(argc,argv);
	if(!head)
		return (0);
	printf("%d",find_median(head));
	head1 = head;
	while (head1 != NULL)
	{
		printf("stack_a");
		printf("node %d :  %d\n",i,head1 -> nmb);
		head1 = head1 -> next;
		i++;
	}
	pb(&head,&stack_b);
	pb(&head,&stack_b);
	pb(&head,&stack_b);
	sorting_three(&stack_b);
printf("--------------------affiche what is on stack_b------------------------------------\n");
	head1 = stack_b;
	while (head1 != NULL)
	{
		printf("stack_b");
		printf("node %d :  %d\n",i,head1 -> nmb);
		head1 = head1 -> next;
		i++;
	}
	printf("--------------------affiche what is on stack_a------------------------------------\n");
	head1 = head;
	while (head1 != NULL)
	{
		printf("stack_a");
		printf("node %d :  %d\n",i,head1 -> nmb);
		head1 = head1 -> next;
		i++;
	}
	printf("\n%d",head -> next -> nmb);
	printf("\n%d",fct_targe_node(head -> next,stack_b));

	ft_lstclear(&head);
	ft_lstclear(&stack_b);
	// str = bring_arg("0 5 1 8 3 6 0");
	// printf("%d",ft_double(str));
	return (0);
}