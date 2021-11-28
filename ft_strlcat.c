/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbinary <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:20:08 by fbinary           #+#    #+#             */
/*   Updated: 2021/11/11 19:46:51 by fbinary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;
	size_t	begin_len_dst;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	begin_len_dst = len_dst;
	i = 0;
	if (dstsize <= len_dst)
		return (dstsize + len_src);
	while (len_dst < dstsize - 1 && src[i])
	{
		dst[len_dst] = src[i];
		i++;
		len_dst++;
	}
	dst[len_dst] = 0;
	return (begin_len_dst + len_src);
}
