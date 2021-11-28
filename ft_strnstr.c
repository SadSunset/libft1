/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbinary <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 21:56:52 by fbinary           #+#    #+#             */
/*   Updated: 2021/11/11 16:33:59 by fbinary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_ned;

	len_ned = ft_strlen(needle);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (*haystack && len >= len_ned)
	{
		if (*haystack == *needle && !(ft_memcmp(haystack, needle, len_ned)))
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
