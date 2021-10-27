/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbinary <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 18:01:37 by fbinary           #+#    #+#             */
/*   Updated: 2021/10/25 18:30:49 by fbinary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	if (!dest && !src)
		return (NULL);
	if (dest < src)
		ft_memcpy(dest, src, len);
	else
	{
		while (len--)
			((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
	}
	return (dest);
}	
