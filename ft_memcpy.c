/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thivu <thivu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:03:30 by thivu             #+#    #+#             */
/*   Updated: 2024/03/21 19:10:20 by thivu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (n--)
		*d++ = *s++;
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	unsigned char dst[11];
	const unsigned char src[] = "hello world!";
	printf("%s", memcpy(dst, src, 9));
	printf("\n%s", ft_memcpy(dst, src, 9));
	return (0);
}*/
