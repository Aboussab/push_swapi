/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   casting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <aboussab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 11:43:00 by aboussab          #+#    #+#             */
/*   Updated: 2026/01/25 20:02:05 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_list	valide_arg(char *str)
{
	char	**ptr;
	int		i;
	t_list **head;
	t_list **tmp;

	i = 0;
	ptr = ft_split(str,' ');
	while(i < w_count(str))
	{
		head = ft_lstnew(ft_atoi(ptr[i]));
		i++;
		tmp = ft_lstnew(ft_atoi(ptr[i]));
		ft_lstadd_back();
	}
	
}

