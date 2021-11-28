/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbinary <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:07:26 by fbinary           #+#    #+#             */
/*   Updated: 2021/11/14 18:26:48 by fbinary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	check_start(char const **s1, char const *set)
{
	while (**s1 && ft_strchr(set, **s1) != (void *)0)
		(*s1)++;
}

static size_t	check_end(char const *s1, char const *set, size_t n)
{
	while (n > 0 && ft_strrchr(set, s1[n - 1]) != (void *)0)
		n--;
	return (n);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	check_start(&s1, set);
	end = ft_strlen(s1);
	if (end)
		end = check_end(s1, set, end);
	result = (char *)malloc(sizeof(char) * (end + 1));
	if (result == (char *)0)
		return (result);
	ft_strlcpy(result, s1, end + 1);
	return (result);
}
