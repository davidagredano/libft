/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 18:15:17 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/11 18:39:33 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Converts an unsigned integer to a string representation.
 * Allocates memory for the resulting string and returns it,
 * or NULL if allocation fails.
 */

static int	ft_nlen(unsigned int n)
{
	if (n / 10 == 0)
		return (1);
	return (1 + ft_nlen(n / 10));
}

char	*ft_uitoa(unsigned int n)
{
	char	*str;
	int		i;

	str = (char *) ft_calloc(ft_nlen(n) + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = ft_nlen(n);
	while (--i >= 0)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
