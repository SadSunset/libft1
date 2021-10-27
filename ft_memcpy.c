/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbinary <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 18:08:16 by fbinary           #+#    #+#             */
/*   Updated: 2021/10/27 15:36:10 by fbinary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		n--;
		i++;
	}
	return (dest);
}

int main()
{
	unsigned char src[10] = "123456";
	unsigned char dest[10] = "";

	ft_memcpy(dest, src, 6);
	printf("%s", dest);
	return (0);
}
