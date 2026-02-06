/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <aboussab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 23:22:52 by aboussab          #+#    #+#             */
/*   Updated: 2026/02/01 15:20:41 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*curnt;
	t_list	*nxt;

	curnt = NULL;
	nxt = NULL;
	if (!lst)
		return ;
	curnt = *lst;
	while (curnt != NULL)
	{
		nxt = curnt->next;
		free(curnt);
		curnt = nxt;
	}
	free(nxt);
	*lst = NULL;
}
