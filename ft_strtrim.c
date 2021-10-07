/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmerlene <gmerlene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:37:01 by gmerlene          #+#    #+#             */
/*   Updated: 2021/10/07 16:15:33 by gmerlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_char_in_str(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	get_start(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	if (!set)
		return (i);
	while (s1[i])
	{
		if (!find_char_in_str(set, s1[i]))
			return (i);
		i++;
	}
	return (i);
}

static size_t	get_end(char const *s1, char const *set)
{
	size_t	i;

	i = ft_strlen(s1) - 1;
	if (!set)
		return (i);
	while (i >= 0)
	{
		if (!find_char_in_str(set, s1[i]))
			return (i);
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed;

	if (!s1)
		return (NULL);
	start = get_start(s1, set);
	end = get_end(s1, set);
	if (start >= end)
		end = start + 1;
	trimmed = ft_substr(s1, start, end - start + 1);
	if (!trimmed)
		return (NULL);
	return (trimmed);
}
