/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbinary <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:12:40 by fbinary           #+#    #+#             */
/*   Updated: 2021/10/25 17:29:39 by fbinary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_memset(void *dest, int c, size_t n)
{
	char	*dest1;

	dest1 = (char *)dest;
	while (n > 0 && *dest1 != '\0')
	{
		*dest1 = (unsigned char)c;
		dest1++;
		n--;
	}
	return (dest);
}

int main()
{
	unsigned char src[] = "1234";
	ft_memset(src, '6', 6);
	printf("%s", src);
	return (0);
}
