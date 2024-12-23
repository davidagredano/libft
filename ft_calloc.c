/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 13:21:27 by dagredan          #+#    #+#             */
/*   Updated: 2024/12/23 16:24:28 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*mem;

	total_size = nmemb * size;
	if (total_size > 0 && nmemb != total_size / size)
		return (NULL);
	mem = malloc(total_size);
	if (!mem)
		return (NULL);
	ft_memset(mem, 0, total_size);
	return (mem);
}
