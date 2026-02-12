/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <aboussab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 11:43:00 by aboussab          #+#    #+#             */
/*   Updated: 2026/02/04 13:12:39 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_split(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
}

int	ft_double(t_list **head_org)
{
	t_list	*node;
	t_list	*head;

	head = (*head_org);
	while (head)
	{
		node = head -> next;
		while (node)
		{
			if (node -> nmb == head -> nmb)
				return (1);
			node = node -> next;
		}
		head = head -> next;
	}
	return (0);
}

int	valide_arg(char *str)
{
	char	**ptr;
	size_t	i;
	size_t	n;

	if (!str)
		return (0);
	i = 0;
	n = w_count(str, ' ');
	if (n == 0)
		return (0);
	ptr = ft_split(str, ' ');
	if (!ptr || !ptr[0])
		return (free_split(ptr), 0);
	while (i < n)
	{
		if (!ptr[i] || !(ft_isdigit(ptr[i])))
			return (free_split(ptr), 0);
		i++;
	}
	return (free_split(ptr), 1);
}

char	**bring_arg(char *str)
{
	char	**ptr;
	size_t	i;
	size_t	n;

	if (!str)
		return (NULL);
	i = 0;
	n = w_count(str, ' ');
	if (n == 0)
		return (NULL);
	ptr = ft_split(str, ' ');
	if (!ptr || !ptr[0])
		return (free_split(ptr), NULL);
	while (i < n)
	{
		if (!ptr[i] || !(ft_isdigit(ptr[i++])))
			return (free_split(ptr), NULL);
	}
	i = 0;
	while (i < n)
	{
		if ((valide_arg(ptr[i++]) == 0))
			return (free_split(ptr), NULL);
	}
	return (ptr);
}

t_list	*insert_list(char *str, long nmb, size_t i, char **ptr)
{
	t_list	*new_tmp;
	t_list	*head;

	ptr = bring_arg(str);
	if (!ptr || !str)
		return (NULL);
	if (!ptr[0])
		return (free_split(ptr), NULL);
	nmb = ft_atoi(ptr[0]);
	if ((nmb) > INT_MAX)
		return (free_split(ptr), NULL);
	head = ft_lstnew(nmb);
	if (!head)
		return (free_split(ptr), ft_lstclear(&head), NULL);
	while (ptr[i] != NULL)
	{
		nmb = ft_atoi(ptr[i++]);
		if (nmb > INT_MAX)
			return (free_split(ptr), ft_lstclear(&head), NULL);
		new_tmp = ft_lstnew(nmb);
		if (!new_tmp)
			return (free_split(ptr), ft_lstclear(&head), NULL);
		ft_lstadd_back(&head, new_tmp);
	}
	return (free_split(ptr), head);
}
