/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <aboussab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:38:57 by aboussab          #+#    #+#             */
/*   Updated: 2025/10/31 16:26:28 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atoi(const char *nptr)
{
	long long	n;
	size_t		i;
	int			sin;
	int			j;

	i = 0;
	sin = 1;
	n = 0;
	while (nptr && ((nptr[i] <= 13 && nptr[i] >= 9) || nptr[i] == 32))
		i++;
	if ((nptr[i] == 45 || nptr[i] == 43) && nptr[i])
	{
		if (nptr[i++] == 45)
			sin = -1;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		j = nptr[i++] - 48;
		if ((n > INT_MAX / 10) || (n == INT_MAX / 10 && j > 7 && sin == 1))
			return (2147483648);
		if (n > -(INT_MIN / 10) || (n == -(INT_MIN / 10) && j > 8 && sin == -1))
			return (2147483648);
		n = j + (n * 10);
	}
	return ((n * sin));
}
