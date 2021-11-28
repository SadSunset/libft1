/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbinary <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:35:48 by fbinary           #+#    #+#             */
/*   Updated: 2021/11/13 20:48:36 by fbinary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	length;
	size_t	i;

	length = ft_strlen(s1);
	i = 0;
	str = malloc(length + 1);
	if (!str)
		return (NULL);
	while (i < length)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
