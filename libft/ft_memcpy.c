/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <aboussab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:35:34 by aboussab          #+#    #+#             */
/*   Updated: 2025/11/02 09:38:51 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dest2;
	const unsigned char	*src2;
	size_t				i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	dest2 = dest;
	src2 = src ;
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest);
}
