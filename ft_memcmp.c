/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thivu <thivu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:31:42 by thivu             #+#    #+#             */
/*   Updated: 2024/03/18 10:26:06 by thivu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n && *str1 == *str2)
	{
		str1++;
		str2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*str1 - (unsigned char)*str2);
}
/*
#include <stdio.h>
int main(void)
{
    char s1[] = "Hello 4\0Madrid";
    char s2[] = "Hello 42";
    int n = ft_memcmp(s1, s2, 8);
    int m = ft_strncmp(s1, s2, 8);
    printf("%d \n%d", n, m);
    return (0);
}

The memcmp() function compares byte string s1 against byte string s2.  Both
strings are assumed to be n bytes long.
The memcmp() function returns zero if the two strings are identical, 
otherwise returns the difference between the first two differing bytes
(treated as unsigned char values, so that `\200' is greater than `\0', 
for example).
Zero-length strings are always identical.  This behavior is not required by C
and portable code should only depend on the sign of the returned value.
*/
