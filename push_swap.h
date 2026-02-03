/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <aboussab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 11:43:13 by aboussab          #+#    #+#             */
/*   Updated: 2026/02/03 12:21:30 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include"libft/libft.h"

void	sorting_five(t_list	**a,t_list	**b);
void	sorting_two(t_list **head);

int	ft_double(t_list **head_org);
int	find_median(t_list *a);
char	**bring_arg(char *str);

void	free_split(char **ptr);
void	sorting_three(t_list **head);
t_list	*combnitiones(int argc,char **argv);
void	sa(t_list **head);
void	sb(t_list **head);
void	ss(t_list **stack_a,t_list **stack_b);
void	ra(t_list **head);
void	rb(t_list **head);
void	rr(t_list **stack_a,t_list **stack_b);
void	rra(t_list **head);
void	rrb(t_list **head);
void	rrr(t_list **stack_a,t_list **stack_b);
void	pa(t_list **stack_b,t_list **stack_a);
void	pb(t_list **stack_a,t_list **stack_b);



#endif