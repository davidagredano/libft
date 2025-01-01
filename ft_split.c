/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 13:32:44 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/01 21:32:36 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_substrs(char *str, char c);
static size_t	ft_next_substr_len(char *str, char c);
static int		ft_alloc_substr(char *s, size_t len, char **substrs, size_t i);

/**
 * Splits a string into an array of substrings, using a delimiter character.
 * Allocates memory for the array and each substring, with the array ending
 * with a NULL pointer.
 * Returns the array of substrings, or NULL if allocation fails.
 */

char	**ft_split(char const *s, char c)
{
	char	**substrs;
	size_t	substrs_i;
	size_t	substr_len;
	char	*ptr;

	ptr = (char *) s;
	substrs = (char **) ft_calloc(ft_count_substrs(ptr, c) + 1, sizeof(char *));
	if (!substrs)
		return (NULL);
	substrs_i = 0;
	while (*ptr != '\0')
	{
		if (*ptr == c)
			ptr++;
		else
		{
			substr_len = ft_next_substr_len(ptr, c);
			if (!ft_alloc_substr(ptr, substr_len, substrs, substrs_i))
				return (NULL);
			substrs_i++;
			ptr += substr_len;
		}
	}
	substrs[substrs_i] = NULL;
	return (substrs);
}

static size_t	ft_count_substrs(char *str, char c)
{
	size_t	n;

	n = 0;
	while (*str != '\0')
	{
		if (*str == c)
			str++;
		else
		{
			n++;
			str += ft_next_substr_len(str, c);
		}
	}
	return (n);
}

static size_t	ft_next_substr_len(char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	return (i);
}

static int	ft_alloc_substr(char *s, size_t len, char **substrs, size_t i)
{
	substrs[i] = ft_substr(s, 0, len);
	if (!substrs[i])
	{
		while (i > 0)
		{
			i--;
			free(substrs[i]);
		}
		free(substrs);
		return (0);
	}
	return (1);
}
