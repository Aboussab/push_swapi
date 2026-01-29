/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <aboussab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 09:38:53 by aboussab          #+#    #+#             */
/*   Updated: 2025/10/31 16:32:42 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_convert(char *s, long sub, long n)
{
	size_t	j;
	char	c;

	j = 0;
	if (n < 0)
	{
		n = - (long)n;
		j = 1;
		s[0] = '-';
	}
	sub = sub / 10;
	while (sub > 0)
	{
		c = ((n / sub) % 10) + '0';
		s[j] = c;
		j++;
		sub = sub / 10;
	}
	s[j] = '\0';
	return (s);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	i;
	size_t	div;
	size_t	sub;

	div = 0;
	i = n;
	if (n == 0)
		return (ft_strdup("0"));
	if (i < 0)
	{
		i = i * (-1);
		div = 1;
	}
	sub = 1;
	while (i > 0)
	{
		i = i / 10;
		sub = sub * 10;
		div++;
	}
	str = (char *)malloc(div + 1);
	if (!str)
		return (NULL);
	return (ft_convert(str, sub, (long)n));
}
