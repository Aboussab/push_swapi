/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <aboussab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 14:46:35 by aboussab          #+#    #+#             */
/*   Updated: 2026/01/25 19:55:12 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	w_count(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	**del(char **arry, size_t p)
{
	while (p > 0)
		free(arry[--p]);
	free(arry);
	return (NULL);
}

static char	**ft_limit(char **arry, const char *s, char c)
{
	size_t	i;
	size_t	n;
	size_t	p;

	i = 0;
	p = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		n = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if ((i - n) > 0)
		{
			arry[p] = ft_substr(s, n, i - n);
			if (!arry[p])
				return (del(arry, p));
			p++;
		}
	}
	arry[p] = NULL;
	return (arry);
}

char	**ft_split(char const *s, char c)
{
	char	**arry;
	size_t	n;

	if (!s)
		return (NULL);
	if (c != '\0')
		n = w_count(s, c);
	else if (s[0] == '\0')
		n = 0;
	else
		n = 1;
	arry = (char **)malloc((n + 1) * sizeof(char *));
	if (!arry)
		return (NULL);
	if (n == 1 && c == '\0')
	{
		arry[0] = ft_substr(s, 0, ft_strlen(s));
		if (!arry[0])
			return (del(arry, 0));
		arry[1] = NULL;
		return (arry);
	}
	return (ft_limit(arry, s, c));
}
