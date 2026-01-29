/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <aboussab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 13:13:57 by aboussab          #+#    #+#             */
/*   Updated: 2025/11/02 15:39:16 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	j = 0;
	if (size == 0 && !dst)
		return (ft_strlen(src));
	i = ft_strlen(dst);
	k = i + ft_strlen(src);
	if (size <= i)
		return (size + k - i);
	while (src[j] != '\0' && i + 1 < size)
	{
		dst[i++] = src[j++];
	}
	dst[i] = '\0';
	return (k);
}
