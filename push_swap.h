/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <aboussab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 11:43:13 by aboussab          #+#    #+#             */
/*   Updated: 2026/02/04 12:58:37 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include "libft/libft.h"

t_list	*combnitiones(int argc, char **argv, int found);
void	free_split(char **ptr);
int		ft_double(t_list **head_org);
int		valide_arg(char *str);
char	**bring_arg(char *str);
t_list	*initials(long *nmb, int *j);
t_list	*insert_list(char *str, long nmb, size_t i, char **ptr);
void	sa(t_list **head);
void	sb(t_list **head);
void	ss(t_list **stack_a, t_list **stack_b);
void	ra(t_list **head);
void	rb(t_list **head);
void	rr(t_list **stack_a, t_list **stack_b);
void	rra(t_list **head);
void	rrb(t_list **head);
void	rrr(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_b, t_list **stack_a);
void	pb(t_list **stack_a, t_list **stack_b);

void	sorting_five(t_list	**a, t_list	**b);
void	bring_min(t_list **a, t_list **b);
void	simplest_move_a(t_list **a, int index);

void	sorting_three(t_list **head);
void	sorting_two(t_list **head);

void	sorting_algo(t_list **a, t_list **b, int chunk);
void	step_pushinb(t_list **a, t_list **b, int chunk);
void	indexing_node(t_list *b);
int		bring_biger(t_list *b);
void	simplest_move_b(t_list **b, int index);
void	push_a(t_list **a, t_list **b);
int		sorted_index_staack(t_list *a);
void	indexing_stack(t_list *a, int *arry);
void	sort_arry(int *arry, int size);

#endif