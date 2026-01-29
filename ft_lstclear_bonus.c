/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <aboussab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 23:22:52 by aboussab          #+#    #+#             */
/*   Updated: 2026/01/26 11:05:35 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*curnt;
	t_list	*nxt;

	if (!lst)
		return ;
	curnt = *lst;
	while (curnt != NULL)
	{
		nxt = curnt->next;
		free(curnt);
		curnt = nxt;
	}
	*lst = NULL;
}
