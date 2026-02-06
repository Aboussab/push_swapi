/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <aboussab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 21:10:29 by aboussab          #+#    #+#             */
/*   Updated: 2025/10/31 18:06:06 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_compare(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	b;
	size_t	e;

	b = 0;
	if (!s1)
		return (NULL);
	if (!set || set[0] == '\0')
		return (ft_strdup(s1));
	if (!*s1)
		return (ft_strdup(""));
	e = ft_strlen(s1) - 1;
	while (ft_compare(set, s1[b]))
		b++;
	while (e >= b && ft_compare(set, s1[e]))
		e--;
	if (b > e)
		return (ft_strdup(""));
	ptr = (char *)malloc(e - b + 2);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, &s1[b], e - b + 1);
	ptr[e - b + 1] = '\0';
	return (ptr);
}
