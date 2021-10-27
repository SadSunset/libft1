/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbinary <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 20:15:30 by fbinary           #+#    #+#             */
/*   Updated: 2021/10/27 14:52:25 by fbinary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*s1;

	s1 = s;
	while (*s)
		s++;
	while (s > s1)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		--s;
	}
	if (c == '\0')
		return ((char *)s);
	return (0);
}
