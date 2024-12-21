/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 22:52:42 by dagredan          #+#    #+#             */
/*   Updated: 2024/12/21 23:09:59 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_unsigned_char;
	unsigned char	*s2_unsigned_char;
	size_t			i;

	if (n == 0)
		return (0);
	s1_unsigned_char = (unsigned char *) s1;
	s2_unsigned_char = (unsigned char *) s2;
	i = 0;
	while (i < n - 1 && s1_unsigned_char[i] == s2_unsigned_char[i])
		i++;
	return (s1_unsigned_char[i] - s2_unsigned_char[i]);
}
