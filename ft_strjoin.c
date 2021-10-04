/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmerlene <gmerlene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:36:55 by gmerlene          #+#    #+#             */
/*   Updated: 2021/10/04 20:12:47 by gmerlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lenS1;
	size_t	lenS2;
	size_t	i;
	size_t	j;
	char		*join;
	
	i = 0;
	j = 0;
	lenS1 = ft_strlen(s1);
	lenS2 = ft_strlen(s2);
	join = malloc(sizeof(char) * (lenS1 + lenS2 + 1));
	if (!join)
		return (NULL);
	while (i < lenS1)
	{
		join[i] = s1[i];
		i++;
	}
	while (j < lenS2)
	{
		join[i + j] = s2[j];
		j++;
	}
	return (join);
}
