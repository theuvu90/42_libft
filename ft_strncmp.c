/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thivu <thivu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:29:59 by thivu             #+#    #+#             */
/*   Updated: 2024/03/19 13:36:27 by thivu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n && *s1 && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (n > 0)
		return ((unsigned char)*s1 - (unsigned char)*s2);
	return (0);
}
/*
#include "stdio.h"
int main(void)
{
    char s1[] = "Hello 4\0Madrid";
    char s2[] = "Hello 4\0abc";    
    int n = ft_strncmp(s1, s2, 10);
    printf("%d", n);
    return (0);
}

The strcmp() and strncmp() functions lexicographically compare the null-ter-
     minated strings s1 and s2.

     The strncmp() function compares not more than n characters.  Because
     strncmp() is designed for comparing strings rather than binary data, charac-
     ters that appear after a `\0' character are not compared.
 The strcmp() and strncmp() functions return an integer greater than, equal
     to, or less than 0, according as the string s1 is greater than, equal to, or
     less than the string s2.  The comparison is done using unsigned characters,
     so that `\200' is greater than `\0'.
*/
