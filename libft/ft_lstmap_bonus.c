/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <aboussab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 22:38:10 by aboussab          #+#    #+#             */
/*   Updated: 2026/01/29 21:05:07 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void))
// {
// 	t_list	*n_lst;
// 	t_list	*ptr;

// 	if (!lst || !f || !del)
// 		return (NULL);
// 	n_lst = ft_lstnew(f(lst->nmb));
// 	if (!n_lst)
// 		return (NULL);
// 	lst = lst->next;
// 	while (lst != NULL)
// 	{
// 		ptr = ft_lstnew(f(lst->nmb));
// 		if (!ptr)
// 		{
// 			ft_lstclear(&n_lst);
// 			return (NULL);
// 		}
// 		ft_lstadd_back(&n_lst, ptr);
// 		lst = lst->next;
// 	}
// 	return (n_lst);
// }
