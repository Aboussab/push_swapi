/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   casting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <aboussab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 11:43:00 by aboussab          #+#    #+#             */
/*   Updated: 2026/01/27 16:46:10 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		if(!(ft_isdigit(ptr[i])))
			return (free(ptr),0);
		i++;
	}
	return (free(ptr),1);
}

char	**bring_arg(char *str)
{
	char	**ptr;
	size_t		i;
	size_t	n;

	if (!str)
		return NULL;
	i = 0;
	n = w_count(str,' ');
	ptr = ft_split(str,' ');
	while (i < n)
	{
		if(!(ft_isdigit(ptr[i])))
			return (free(ptr),NULL);
		i++;
	}
	i = 0;
	while(i > n)
	{
		if(valide_arg(ptr[i]) == 0)
			return(write(2,"ERROR",5),free(ptr),NULL);
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
		return (free(ptr),ft_lstclear(&head),NULL);
	i = 1;
	while (ptr[i] != NULL)
	{
		nmb = ft_atoi(ptr[i]);
		new_tmp = ft_lstnew(nmb);
		if (!new_tmp)
			return(free(ptr),ft_lstclear(&head),NULL);
		ft_lstadd_back(&head,new_tmp);
		i++;	
	}
	return (free(ptr),head);
}


t_list	*combnitiones(int argc,char **argv)
{
	t_list	*head;
	t_list	*new_tmp;
	int		j;

	j = 1;
	head = insert_list(argv[1]);
	if (!head || !argv)
		return NULL;
	while (j < argc)
	{
		new_tmp = insert_list(argv[j]);
		if (!new_tmp)
			return(write(2,"ERROR",5),ft_lstclear(&head),NULL);
		ft_lstadd_back(&head,new_tmp);
		j++;
	}
	return (head);
}

int main(int argc,char **argv)
{
	t_list *head1;
	t_list *head;
	int	i = 0;
	
	head = combnitiones(argc,argv);
	head1 = head;
	while (head != NULL)
	{
		printf("node %d :  %d\n",i,head1 -> nmb);
		head1 = head1 -> next;
		i++;
	}
	ft_lstclear(&head);
	return (0);
	
}

