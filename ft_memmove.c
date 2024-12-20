/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 11:25:14 by dagredan          #+#    #+#             */
/*   Updated: 2024/12/20 12:14:26 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_unsigned_char;
	unsigned char	*src_unsigned_char;
	unsigned char	tmp[(unsigned char) -1];
	size_t			i;

	dest_unsigned_char = (unsigned char *) dest;
	src_unsigned_char = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		tmp[i] = src_unsigned_char[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		dest_unsigned_char[i] = tmp[i];
		i++;
	}
	return (dest);
}
