/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 17:44:22 by dagredan          #+#    #+#             */
/*   Updated: 2024/12/23 18:44:17 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	strlen;
	size_t	size;

	strlen = ft_strlen(s);
	if (start >= strlen)
		size = 1;
	else if (strlen - start < len)
		size = strlen - start + 1;
	else
		size = len + 1;

	substr = (char *) malloc(size);
	if (!substr)
		return (NULL);

	if (size == 1)
		ft_strlcpy(substr, "", size);
	else
		ft_strlcpy(substr, &s[start], size);

	return (substr);
}
