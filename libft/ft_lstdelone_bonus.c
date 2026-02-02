/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <aboussab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 23:11:28 by aboussab          #+#    #+#             */
/*   Updated: 2026/01/31 09:31:49 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **lst,int nmb)
{
	t_list	*head;
	t_list	*tmp_node;

	head = *lst;
	while ((head -> nmb) != nmb || (!head))
	{
		tmp_node = head;
		head = head -> next;	
	}
	tmp_node -> next = head -> next;
	free(head);
}