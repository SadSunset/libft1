/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbinary <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 17:34:54 by fbinary           #+#    #+#             */
/*   Updated: 2021/11/13 20:11:58 by fbinary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_toarray(char *result, long long n, size_t len)
{
	size_t	i;

	i = 0;
	if (n < 0)
	{
		result[0] = '-';
		n *= -1;
	}
	while (n)
	{
		result[len - 1 - i] = (n % 10) + '0';
		i++;
		n /= 10;
	}
	result[len] = '\0';
	return (result);
}

char	*ft_itoa(int n)
{
	char		*result;
	size_t		len;
	long long	n1;

	len = 0;
	n1 = n;
	if (n < 0)
		len++;
	while (n1 && ((len++) || 1))
		n1 /= 10;
	if (n == 0)
		return (ft_strdup("0"));
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	ft_toarray(result, n, len);
	return (result);
}
