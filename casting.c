/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   casting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <aboussab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 11:43:00 by aboussab          #+#    #+#             */
/*   Updated: 2026/01/26 15:48:21 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**valide_arg(char *str)
{
	char	**ptr;
	size_t		i;
	size_t	n;

	i = 0;
	n = w_count(str,' ');
	ptr = ft_split(str,' ');
	while (i < n)
	{
		if(!(ft_isdigit(ptr[i])))
			return NULL;
		i++;
	}
	return (ptr);
}
t_list	**insert_list(char **ptr)
{
	size_t	i;
	int		nmb;
	t_list	**head;
	t_list	*new_tmp;

	if (!ptr)
		return NULL;
	nmb = ft_atoi(ptr[0]);
	new_tmp = ft_lstnew(&nmb);
	head = &new_tmp;
	if (!head)
		return (ft_lstclear(head),NULL);
	i = 1;
	while (ptr[i] != NULL)
	{
		nmb = ft_atoi(ptr[i]);
		new_tmp = ft_lstnew(&nmb);
		if (!new_tmp)
			return(ft_lstclear(head),NULL);
		ft_lstadd_back(head,new_tmp);
		i++;	
	}
	return (head);
}

int main()
{
	char **ptr;
	t_list	**head;
	t_list	*pointer;
	int	*number;
	int	i = 0;
	char *str = "15 12 48 215 25 ";

	ptr = valide_arg(str);
	head = insert_list(ptr);
	while (i < 5)
	{
		printf("%d\n",ft_atoi(ptr[i]));
		i++;
	}
	i = 0;
	while (i < 5)
	{
		i++;
	}
	return (0);
	
}

