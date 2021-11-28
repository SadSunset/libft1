/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbinary <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 21:19:44 by fbinary           #+#    #+#             */
/*   Updated: 2021/11/14 16:00:49 by fbinary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char		arr[10];
	size_t		length;
	long long	n1;

	n1 = n;
	length = 0;
	if (n1 < 0)
	{
		write(fd, "-", 1);
		n1 *= -1;
	}
	else if (n1 == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	while (n1)
	{
		arr[10 - 1 - (length++)] = n1 % 10 + '0';
		n1 /= 10;
	}
	write(fd, arr + 10 - length, length);
}
