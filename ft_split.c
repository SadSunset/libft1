/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbinary <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:27:27 by fbinary           #+#    #+#             */
/*   Updated: 2021/11/14 20:12:18 by fbinary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	alloc_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (s != (void *)0 && *s)
	{
		while (*s == c)
			s++;
		if (!(*s))
			continue ;
		s = ft_strchr(s, c);
		count++;
	}
	return (count);
}

static void	*ft_free_fun(char **split, size_t num)
{
	while (num--)
		free(split[num]);
	free(split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	size_t	i;
	char	**result;
	char	*iter;

	if (!s)
		return (NULL);
	count = alloc_words(s, c);
	result = (char **)malloc(sizeof(char *) * (count + 1));
	if (!result)
		return (NULL);
	result[count] = NULL;
	i = 0;
	while (i < count)
	{
		while (*s == c && *s && s != NULL)
			s++;
		iter = ft_strchr(s, c);
		result[i] = ft_substr(s, 0, (size_t)iter - (size_t)s);
		if (!result[i++])
			return ((char **)ft_free_fun(result, i));
		s = iter;
	}
	return (result);
}
