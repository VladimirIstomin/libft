/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmerlene <gmerlene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 22:24:35 by gmerlene          #+#    #+#             */
/*   Updated: 2021/10/05 10:54:37 by gmerlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hs, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	
	i = 0;
	while (hs[i] && i < len)
	{
		j = 0;
		while (needle[j] && (i + j) < len)
		{
			if (hs[i + j] != needle[j])
				break ;
			j++;
		}
		if (needle[j] == '\0')
			return (hs + i);
		i++;
	}
	return (NULL);
}
