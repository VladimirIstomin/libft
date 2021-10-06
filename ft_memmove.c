/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmerlene <gmerlene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:52:20 by gmerlene          #+#    #+#             */
/*   Updated: 2021/10/06 17:24:00 by gmerlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const char *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	if ((char *)dst < src)
	{
		i = 0;
		while (i < len)
		{
			((char *)dst)[i] = src[i];
			i++;
		}	
	}
	else
	{
		i = len - 1;
		while (i >= 0 && i <= len)
		{
			((char *)dst)[i] = src[i];
			i--;
		}
	}
	return (dst);
}
