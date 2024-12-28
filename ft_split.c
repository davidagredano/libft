/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 13:32:44 by dagredan          #+#    #+#             */
/*   Updated: 2024/12/28 17:25:54 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	n;
	int		inword;
	size_t	i;

	n = 0;
	inword = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && inword == 0)
		{
			n++;
			inword = 1;
		}
		else if (s[i] == c && inword == 1)
			inword = 0;
		i++;
	}
	return (n);
}

char	*ft_get_next_word(const char *s, char c)
{
	size_t	wordlen;
	char	*word;
	size_t	j;

	wordlen = 0;
	j = 0;
	while (s[j] != c && s[j] != '\0')
	{
		wordlen++;
		j++;
	}
	word = ft_substr(s, 0, wordlen);
	if (!word)
		return (NULL);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	nstrs;
	size_t	strs_i;
	int		inword;
	size_t	i;

	nstrs = ft_count_words(s, c);
	strs = (char **) ft_calloc(nstrs + 1, sizeof(char *));
	if (!strs)
		return (NULL);
	inword = 0;
	strs_i = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && inword == 0)
		{
			strs[strs_i] = ft_get_next_word(&s[i], c);
			strs_i++;
			inword = 1;
		}
		else if (s[i] == c && inword == 1)
			inword = 0;
		i++;
	}
	strs[strs_i] = NULL;
	return (strs);
}
