/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <aboussab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 22:52:44 by aboussab          #+#    #+#             */
/*   Updated: 2025/10/30 12:22:58 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n;

	if (little[0] == 0)
		return ((char *)big);
	i = 0;
	while (big[i] != 0 && i < len)
	{
		j = 0;
		n = 0;
		while (big[i + n] == little[j] && ((i + n) < len) && little[j] != 0)
		{
			j++;
			n++;
		}
		if (little[j] == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
