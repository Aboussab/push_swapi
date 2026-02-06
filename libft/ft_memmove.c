/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <aboussab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:58:00 by aboussab          #+#    #+#             */
/*   Updated: 2025/10/31 18:05:43 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest2;
	const unsigned char	*src2;
	size_t				i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	dest2 = dest;
	src2 = src;
	if (dest2 > src2)
	{
		while (n > 0)
		{
			n--;
			dest2[n] = src2[n];
		}
		return (dest);
	}
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest);
}
