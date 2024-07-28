/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thivu <thivu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:11:21 by thivu             #+#    #+#             */
/*   Updated: 2024/04/05 18:06:15 by thivu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dst);
	j = 0;
	while (src[j] && j < n)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (dst);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize <= dstlen)
		return (dstsize + srclen);
	ft_strncat(dst, src, dstsize - dstlen - 1);
	return (dstlen + srclen);
}
