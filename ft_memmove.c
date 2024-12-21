/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 11:25:14 by dagredan          #+#    #+#             */
/*   Updated: 2024/12/21 10:51:48 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_unsigned_char;
	unsigned char	*src_unsigned_char;
	size_t			i;

	dest_unsigned_char = (unsigned char *) dest;
	src_unsigned_char = (unsigned char *) src;
	if (src < dest)
	{
		i = n;
		while (i > 0)
		{
			i--;
			dest_unsigned_char[i] = src_unsigned_char[i];
		}
	}
	else if (src > dest)
	{
		i = 0;
		while (i < n)
		{
			dest_unsigned_char[i] = src_unsigned_char[i];
			i++;
		}
	}
	return (dest);
}
