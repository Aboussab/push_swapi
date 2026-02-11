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

int	check_unsorting(t_list *stack_a)
{
	t_list	*node1;
	t_list	*node2;

	node1 = stack_a;
	node2 = stack_a -> next;
	while (node2)
	{
		if ((node1 -> nmb) > (node2 -> nmb))
			return (1);
		node1 = node2;
		node2 = node2 -> next;
	}
	return (0);
}

t_list	*check_haedr(t_list **head)
{
	if (!(*head))
		return (NULL);
	if (ft_double(head))
		return (write(2, "Error\n", 6), ft_lstclear(head), NULL);
	return (*head);
}

t_list	*combnitiones(int argc, char **argv, int found)
{
	t_list	*head;
	t_list	*new_tmp;
	long	nmb;
	int		j;

	if (argc == 1)
		return (NULL);
	head = initials(&nmb, &j);
	while (j < argc)
	{
		if (argv[j] && w_count(argv[j], ' ') == 0)
		{
			j++;
			continue ;
		}
		new_tmp = insert_list(argv[j], nmb, 1, NULL );
		if (!new_tmp)
			return (write(2, "Error\n", 6), ft_lstclear(&head), NULL);
		if (found++ == 0)
			head = new_tmp;
		else
			ft_lstadd_back(&head, new_tmp);
		j++;
	}
	return (check_haedr(&head));
}

void	sorting_algo(t_list **a, t_list **b, int chunk)
{
	sorted_index_staack((*a));
	step_pushinb(a, b, chunk);
	push_a(a, b);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		size;

	stack_b = NULL;
	stack_a = combnitiones(argc, argv, 0);
	if (!stack_a)
		return (0);
	size = ft_lstsize(stack_a);
	if (size == 0 || size == 1)
		return (ft_lstclear(&stack_a), 0);
	if (!(check_unsorting(stack_a)))
		return (ft_lstclear(&stack_a), 0);
	if (size == 2)
		sorting_two(&stack_a);
	else if (size == 3)
		sorting_three(&stack_a);
	else if (size == 5)
		sorting_five(&stack_a, &stack_b);
	else if (size <= 100)
		sorting_algo(&stack_a, &stack_b, 20);
	else if (size <= 500)
		sorting_algo(&stack_a, &stack_b, 35);
	return (ft_lstclear(&stack_a), ft_lstclear(&stack_b), 0);
}
