/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 10:30:08 by dagredan          #+#    #+#             */
/*   Updated: 2024/12/29 15:32:37 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_get_start(char const *s1, char const *set);
static size_t		ft_get_len(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*new;
	unsigned int	start;
	size_t			len;

	start = ft_get_start(s1, set);
	len = ft_get_len(s1 + start, set);
	new = ft_substr(s1, start, len);
	if (!new)
		return (NULL);
	return (new);
}

static unsigned int	ft_get_start(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s1[i] != set[j] && set[j] != '\0')
			j++;
		if (set[j] == '\0')
			break ;
		i++;
	}
	return (i);
}

static size_t	ft_get_len(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(s1);
	while (--i > 0)
	{
		j = 0;
		while (s1[i] != set[j] && set[j] != '\0')
			j++;
		if (set[j] == '\0')
			break ;
	}
	return (i + 1);
}
