/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbinary <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:17:22 by fbinary           #+#    #+#             */
/*   Updated: 2021/10/27 14:48:46 by fbinary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

int	ft_isalpha(int letter);

int	ft_isdigit(int digit);

int	ft_isalnum(int ch);

int	ft_isascii(int ch);

int	ft_isprint(int ch);

size_t	ft_strlen(const char *s);

void	*ft_memset(void *dest, int c, size_t n);

void	ft_bzero(void *s, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n);

#endif
