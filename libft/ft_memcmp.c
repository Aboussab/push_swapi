/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <aboussab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:04:20 by aboussab          #+#    #+#             */
/*   Updated: 2025/10/30 11:39:57 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = s1;
	p2 = s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if ((p1[i] != p2[i]))
			return ((unsigned char)p1[i] - (unsigned char)p2[i]);
		else
			i++;
	}
	return (0);
}
