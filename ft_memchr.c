/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thivu <thivu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:30:48 by thivu             #+#    #+#             */
/*   Updated: 2024/03/21 19:01:16 by thivu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;

	str = (const unsigned char *)s;
	while (n--)
	{
		if (*str == (unsigned char)c)
			return ((void *)str);
		str++;
	}
	return (NULL);
}
/*
The memchr() function locates the first occurrence of c (converted to an
unsigned char) in string s.
The memchr() function returns a pointer to the byte located, or NULL if no
such byte exists within n bytes.
*/
