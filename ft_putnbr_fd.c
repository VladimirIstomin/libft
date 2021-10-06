/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmerlene <gmerlene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:37:27 by gmerlene          #+#    #+#             */
/*   Updated: 2021/10/06 17:24:21 by gmerlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	num;

	if (n / 10 != 0)
		ft_putnbr_fd(n / 10, fd);
	else if (n < 0)
		write(fd, "-", 1);
	num = ft_abs(n % 10) + '0';
	write(fd, &num, 1);
}
