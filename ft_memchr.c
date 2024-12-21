/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 21:56:49 by dagredan          #+#    #+#             */
/*   Updated: 2024/12/21 22:47:02 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *s_unsigned_char = (unsigned char *) s; 
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s_unsigned_char[i] == (unsigned char) c)
			return ((void *) &s_unsigned_char[i]);
		i++;
	}
	return (NULL);
}
