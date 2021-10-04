/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmerlene <gmerlene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:52:20 by gmerlene          #+#    #+#             */
/*   Updated: 2021/10/04 20:14:46 by gmerlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	while (dst[i] && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
