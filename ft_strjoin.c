/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 18:49:24 by dagredan          #+#    #+#             */
/*   Updated: 2024/12/26 20:06:08 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	int		memsize;

	memsize = ft_strlen(s1) + ft_strlen(s2) + 1;
	newstr = (char *) ft_calloc(memsize, sizeof(char));
	if (!newstr)
		return (NULL);
	ft_strlcpy(newstr, s1, memsize);
	ft_strlcat(newstr, s2, memsize);
	return (newstr);
}
