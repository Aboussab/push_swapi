/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <aboussab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:14:51 by aboussab          #+#    #+#             */
/*   Updated: 2026/01/27 09:39:48 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int content)
{
	t_list	*nd;

	nd = (t_list *)malloc(sizeof(t_list));
	if (!nd)
		return (NULL);
	nd -> nmb = content;
	nd -> next = NULL;
	return (nd);
}
