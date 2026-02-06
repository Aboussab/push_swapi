/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <aboussab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:03:09 by aboussab          #+#    #+#             */
/*   Updated: 2025/11/03 09:45:00 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char	*ptr;
	size_t	i;

	ptr = dst;
	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			ptr[i] = src[i];
			i++;
		}
		ptr[i] = '\0';
	}
	return (ft_strlen(src));
}
