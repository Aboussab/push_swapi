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
	int		i;

	i = 0;
	while(ptr[i])
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
	size_t		i;
	size_t	n;

	if (!str)
		return 0;
	i = 0;
	n = w_count(str,' ');
	ptr = ft_split(str,' ');
	while (i < n)
	{
		if (!(ft_isdigit(ptr[i])))
			return (free_split(ptr),0);
		i++;
	}
	return (free_split(ptr),1);
}

char	**bring_arg(char *str)
{
	char	**ptr;
	size_t	i;
	size_t	n;

	if (!str)
		return NULL;
	i = 0;
	n = w_count(str,' ');
	ptr = ft_split(str,' ');
	while (i < n)
	{
		if(!(ft_isdigit(ptr[i])))
			return (free_split(ptr),NULL);
		i++;
	}
	i = 0;
	while(i < n)
	{
		if ((valide_arg(ptr[i]) == 0))
			return(write(2,"Error\n",6),free_split(ptr),NULL);
		i++;
	}
	return (ptr);
}

t_list	*insert_list(char *str)
{
	size_t	i;
	int		nmb;
	t_list	*head;
	t_list	*new_tmp;
	char	**ptr;

	ptr = bring_arg(str);
	if (!ptr || !str)
		return NULL;
	nmb = ft_atoi(ptr[0]);
	head = ft_lstnew(nmb);
	if (!head)
		return (free_split(ptr),ft_lstclear(&head),NULL);
	i = 1;
	while (ptr[i] != NULL)
	{
		nmb = ft_atoi(ptr[i]);
		new_tmp = ft_lstnew(nmb);
		if (!new_tmp)
			return(free_split(ptr),ft_lstclear(&head),NULL);
		ft_lstadd_back(&head,new_tmp);
		i++;	
	}
	return (free_split(ptr),head);
}


t_list	*combnitiones(int argc,char **argv)
{
	t_list	*head;
	t_list	*new_tmp;
	int		j;

	j = 2;
	head = insert_list(argv[1]);
	if (!head || !argv)
		return (write(2,"Error\n",6),NULL);
	while (j < argc)
	{
		new_tmp = insert_list(argv[j]);
		if (!new_tmp)
			return(write(2,"Error\n",6),ft_lstclear(&head),NULL);
		ft_lstadd_back(&head,new_tmp);
		j++;
	}
	if (ft_double(&head))
		return (write(2,"Error\n",5), ft_lstclear(&head), NULL);
	return (head);
}
