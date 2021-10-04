/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmerlene <gmerlene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:37:22 by gmerlene          #+#    #+#             */
/*   Updated: 2021/10/04 20:14:15 by gmerlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count + 1);
}

size_t	get_word_length(char const *s, size_t start, char c)
{
	size_t	i;

	i = 0;
	while (s[start + i])
	{
		if (s[start + i] == c)
			return (i);
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	n_words;
	char		**strs;
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	n_words = count_words(s, c);
	strs = malloc(sizeof(char *) * (n_words + 1));
	if (!strs)
		return (NULL);
	while (i < n_words)
	{
		len = get_word_length(s, j, c);
		strs[i] = ft_substr(s, j, len);
		j += len + 1;
		i++;
	}
	strs[i] = NULL;
	return (strs);
}
