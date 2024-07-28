/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thivu <thivu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:32:37 by thivu             #+#    #+#             */
/*   Updated: 2024/03/20 13:17:08 by thivu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle[0])
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && haystack[i + j] && i + j < len)
		{
			if (!needle[j + 1])
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
The strnstr() function locates the first occurrence of the null-terminated
     string needle in the string haystack, where not more than len characters are
     searched.  Characters that appear after a `\0' character are not searched.
     Since the strnstr() function is a FreeBSD specific API, it should only be
     used when portability is not a concern.
If needle is an empty string, haystack is returned; if needle occurs nowhere
     in haystack, NULL is returned; otherwise a pointer to the first character of
     the first occurrence of needle is returned.
EXAMPLES:
The following sets the pointer ptr to the "Bar Baz" portion of largestring:

           const char *largestring = "Foo Bar Baz";
           const char *smallstring = "Bar";
           char *ptr;

           ptr = strstr(largestring, smallstring);

     The following sets the pointer ptr to NULL, because only the first 4 charac-
     ters of largestring are searched:

           const char *largestring = "Foo Bar Baz";
           const char *smallstring = "Bar";
           char *ptr;

           ptr = strnstr(largestring, smallstring, 4);

*/
