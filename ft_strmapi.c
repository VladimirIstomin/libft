/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmerlene <gmerlene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:37:12 by gmerlene          #+#    #+#             */
/*   Updated: 2021/10/04 20:13:49 by gmerlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char		*strf;

	len = ft_strlen(s);
	strf = malloc(sizeof(char) * (len + 1));
	if (!strf)
		return (NULL);
	strf[len--] = '\0';	
	while (len >= 0)
	{
		strf[len] = f(len, s[len]);
		len--;
	}
	return (strf);
}
