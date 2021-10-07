/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmerlene <gmerlene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:36:55 by gmerlene          #+#    #+#             */
/*   Updated: 2021/10/07 17:38:19 by gmerlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*concat(char const *s1, char const *s2, char *join)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < ft_strlen(s1))
	{
		join[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		join[i + j] = s2[j];
		j++;
	}
	join[i + j] = '\0';
	return (join);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lenS1;
	size_t	lenS2;
	char	*join;

	if (!s1 || !s2)
		return (NULL);
	lenS1 = ft_strlen(s1);
	lenS2 = ft_strlen(s2);
	join = malloc(sizeof(char) * (lenS1 + lenS2 + 1));
	if (!join)
		return (NULL);
	return (concat(s1, s2, join));
}
